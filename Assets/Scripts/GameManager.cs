using System.Collections.Generic;
using UnityEngine;

public partial class GameManager : MonoBehaviour
{
    enum State { Home, Playing, Paused, Dead }
    State state = State.Home;

    const float LW = Runner.LW;
    float ChunkLen = 40f;
    MapSlabs map;
    int slabIdx;
    const bool enableRamps = true;   // set to false if you do not want ramps / roof running
    GameObject shieldGo;
    Material shieldMat;
    Light auraLight;
    Kind lastPower = Kind.Hover;
    Material mPuddleA, mPuddleB;

    class Chunk { public GameObject go; public float endZ; }

    Runner runner;
    Chaser chaser;
    Camera cam;
    Transform worldRoot;
    UINode ui;
    readonly List<Chunk> chunks = new List<Chunk>();
    readonly List<Item> items = new List<Item>();
    readonly List<UIButton> buttons = new List<UIButton>();
    float nextChunkZ;
    int rowCooldown;

    float curSpeed, distance, scoreF;
    int runCoins, boxes, bank, best;
    float tMagnet, tMult, tJet, tSpeed, tBoost, tHover;
    float grace, chaserT, penaltyT, shakeT, deadWait, toastT;
    bool stumbled, revived;
    Vector2 swipeStart;
    bool swipeOk;

    Material mRoad, mWalk, mRail, mSleeper, mLane, mEdge, mMetal, mDark, mOrange, mWhite, mYellow,
             mRed, mGold, mWindow, mGlass, mHead, mStripe, mPink, mBlue, mPurple, mCoin, mTorii, mLamp;
    static readonly Color[] neon = {
        new Color(1f, 0.15f, 0.55f), new Color(0.1f, 0.9f, 1f), new Color(0.6f, 0.25f, 1f),
        new Color(1f, 0.85f, 0.1f), new Color(1f, 0.15f, 0.2f), new Color(0.2f, 1f, 0.4f) };

    UINode hud, homePanel, pausePanel, overPanel;
    Text tMulti, tCoins, tScore, tBoxes, tToast, tHomeBest, tOverScore, tOverBest;
    UIButton reviveBtn;
    Text[] tPower = new Text[6];
    static readonly Kind[] powerOrder = { Kind.Magnet, Kind.Mult, Kind.Jetpack, Kind.Speed, Kind.ScoreBoost, Kind.Hover };
    AudioSource sfx;
    AudioClip cCoin, cJump, cCrash, cPower, cRoll, cDodge, cBox, cMission, cUnlock, cLetters, cMagnet;
    AudioSource jingleSrc, magnetSrc;
    float jingleStop = -1f;
    float bufJump, fadeA = 1f, fadeTarget, slowT, coinPunch;
    UINode fade;
    int skin;
    bool tutDone;
    UINode helpPanel;
    Text tSkin;
    static readonly string[] skinNames = { "CLASSIC", "NEON PINK", "CYBER BLUE", "GOLDEN", "TOXIC GREEN", "SHADOW" };
    static readonly Color[] skinTint = {
        new Color(1f, 1f, 1f), new Color(1.6f, 0.55f, 1.2f), new Color(0.5f, 0.85f, 1.7f),
        new Color(1.8f, 1.4f, 0.45f), new Color(0.6f, 1.7f, 0.6f), new Color(0.35f, 0.35f, 0.55f) };
    UINode[] bPower = new UINode[6];
    static readonly float[] powerMax = { 10f, 10f, 6f, 6f, 8f, 15f };

    List<GameObject> env;

    int Score { get { return Mathf.FloorToInt(scoreF); } }

    // ------------------------------------------------------------------ setup
    void Awake()
    {
        Application.targetFrameRate = 60;
        QualitySettings.antiAliasing = 4;                       // smooth edges
        QualitySettings.anisotropicFiltering = AnisotropicFiltering.ForceEnable;   // sharp textures at a distance
        QualitySettings.vSyncCount = 1;
        skin = Mathf.Clamp(PlayerPrefs.GetInt("nr_skin", 0), 0, skinNames.Length - 1);
        tutDone = PlayerPrefs.GetInt("nr_tut", 0) == 1;
        bank = PlayerPrefs.GetInt("nr_coins", 0);
        best = PlayerPrefs.GetInt("nr_best", 0);
        MakeMaterials();
        env = AssetLoader.LoadEnvironment();
        map = MapSlabs.Build(Glb.Load("subway_surfers"), LW);
        if (map != null) ChunkLen = map.slabLen;
        SetupScene();
        SetupAudio();
        Fx.Create(240);
        LoadShopPrefs();
        InitMissions();
        SetupBloom();
        BuildUI();
        ResetRun();
        GoHome();
    }

    void MakeMaterials()
    {
        mRoad = Gfx.Mat(new Color(0.42f, 0.36f, 0.36f), 0.22f);   // light gravel colour - no more black ground
        mWalk = Gfx.MatGloss(new Color(0.3f, 0.28f, 0.38f), 0.1f, 0.6f);
        mPuddleA = Gfx.MatGloss(new Color(0.12f, 0.16f, 0.35f), 0.7f, 0.95f);
        mPuddleB = Gfx.MatGloss(new Color(0.3f, 0.1f, 0.3f), 0.7f, 0.95f);
        mRail = Gfx.Mat(new Color(0.55f, 0.55f, 0.6f));
        mSleeper = Gfx.Mat(new Color(0.14f, 0.1f, 0.1f));
        mLane = Gfx.Mat(new Color(0.1f, 0.9f, 1f), 0.5f);
        mEdge = Gfx.Mat(new Color(1f, 0.15f, 0.6f), 1.8f);
        mMetal = Gfx.Mat(new Color(0.45f, 0.47f, 0.52f), 0.1f);
        mDark = Gfx.Mat(new Color(0.12f, 0.12f, 0.15f));
        mOrange = Gfx.Mat(new Color(1f, 0.5f, 0.1f), 0.9f);
        mWhite = Gfx.Mat(new Color(0.95f, 0.95f, 1f), 0.6f);
        mYellow = Gfx.Mat(new Color(1f, 0.85f, 0.1f), 1.2f);
        mRed = Gfx.Mat(new Color(1f, 0.15f, 0.2f), 1.2f);
        mGold = Gfx.Mat(new Color(1f, 0.78f, 0.15f), 1f);
        mWindow = Gfx.Mat(new Color(1f, 0.85f, 0.5f), 1.4f);
        mGlass = Gfx.Mat(new Color(0.2f, 0.8f, 1f), 1.2f);
        mHead = Gfx.Mat(new Color(1f, 1f, 0.9f), 3f);
        mStripe = Gfx.Mat(new Color(1f, 0.55f, 0.1f), 0.8f);
        mPink = Gfx.Mat(new Color(1f, 0.2f, 0.65f), 1.5f);
        mBlue = Gfx.Mat(new Color(0.25f, 0.5f, 1f), 1.4f);
        mPurple = Gfx.Mat(new Color(0.6f, 0.25f, 1f), 1.2f);
        mCoin = Gfx.Mat(new Color(1f, 0.78f, 0.15f), 1.3f);
        mTorii = Gfx.Mat(new Color(1f, 0.2f, 0.12f), 1.2f);
        mLamp = Gfx.Mat(new Color(1f, 0.8f, 0.45f), 3f);
    }

    void SetupScene()
    {
        worldRoot = new GameObject("World").transform;

        cam = Camera.main;
        if (cam == null)
        {
            var g = new GameObject("Main Camera");
            g.tag = "MainCamera";
            cam = g.AddComponent<Camera>();
            g.AddComponent<AudioListener>();
        }
        Color sky = new Color(0.06f, 0.03f, 0.14f);
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = sky;
        cam.fieldOfView = 62f;
        cam.nearClipPlane = 0.3f;
        cam.allowMSAA = true;
        cam.farClipPlane = 400f;

        RenderSettings.ambientMode = UnityEngine.Rendering.AmbientMode.Flat;
        RenderSettings.ambientLight = new Color(0.32f, 0.34f, 0.5f);
        RenderSettings.fog = true;
        RenderSettings.fogMode = FogMode.Linear;
        RenderSettings.fogColor = sky;
        RenderSettings.fogStartDistance = 70f;
        RenderSettings.fogEndDistance = 240f;

        var old = GameObject.Find("Directional Light");
        if (old != null) old.SetActive(false);
        var lg = new GameObject("Moonlight");
        var l = lg.AddComponent<Light>();
        l.type = LightType.Directional;
        l.color = new Color(0.55f, 0.6f, 1f);
        l.intensity = 1.25f;
        l.shadows = LightShadows.None;
        lg.transform.rotation = Quaternion.Euler(40f, -25f, 0f);

        var rg = new GameObject("Runner");
        rg.transform.SetParent(transform, false);
        runner = rg.AddComponent<Runner>();
        runner.Build();
        runner.SetSkin(skinTint[skin]);

        var pl = new GameObject("NeonGlow");
        pl.transform.SetParent(rg.transform, false);
        pl.transform.localPosition = new Vector3(0, 3f, 2f);
        var pli = pl.AddComponent<Light>();
        pli.type = LightType.Point;
        pli.color = new Color(1f, 0.45f, 0.8f);
        pli.intensity = 2.5f;
        pli.range = 16f;
        pli.shadows = LightShadows.None;
        auraLight = pli;
        shieldMat = Gfx.Glass(Color.white, 0.25f, 0.8f, false);
        shieldGo = Gfx.Prim(PrimitiveType.Sphere, rg.transform, new Vector3(0, 0.95f, 0), new Vector3(1.9f, 2.35f, 1.9f), shieldMat, "shield");
        shieldGo.SetActive(false);

        var cg = new GameObject("Chaser");
        cg.transform.SetParent(transform, false);
        chaser = cg.AddComponent<Chaser>();
        chaser.Build();
    }

    // ------------------------------------------------------------------ audio
    AudioSource musicSrc;

    void SetupAudio()
    {
        sfx = gameObject.AddComponent<AudioSource>();
        musicSrc = gameObject.AddComponent<AudioSource>();
        cCoin = Make("coin", 0.4f, t =>
        {
            float a = Mathf.Sin(6.2832f * 1318f * t) * Mathf.Exp(-t * 16f);
            float t2 = t - 0.07f;
            float b = t2 > 0f ? Mathf.Sin(6.2832f * 1760f * t2) * Mathf.Exp(-t2 * 12f) : 0f;
            return (a + b + 0.15f * Mathf.Sin(6.2832f * 2636f * t) * Mathf.Exp(-t * 28f)) * 0.4f;
        });
        cJump = Make("jump", 0.22f, t => Mathf.Sin(6.2832f * (280f * t + 970f * t * t)) * Mathf.Exp(-t * 9f) * 0.4f);
        float lp = 0f;
        cCrash = Make("crash", 0.65f, t =>
        {
            lp = lp * 0.75f + (Random.value * 2f - 1f) * 0.25f;
            return lp * Mathf.Exp(-t * 6f) * 1.6f + Mathf.Sin(6.2832f * 70f * t) * Mathf.Exp(-t * 8f) * 0.8f;
        });
        float lp2 = 0f;
        cRoll = Make("roll", 0.32f, t =>
        {
            lp2 = lp2 * 0.6f + (Random.value * 2f - 1f) * 0.4f;
            return lp2 * Mathf.Sin(Mathf.PI * t / 0.32f) * 0.5f;
        });
        cPower = Make("power", 0.42f, t =>
        {
            float[] n = { 523f, 659f, 784f, 1047f, 1319f };
            int k = Mathf.Min(4, (int)(t / 0.07f));
            float lt = t - k * 0.07f;
            return Mathf.Sin(6.2832f * n[k] * t) * Mathf.Exp(-lt * 14f) * 0.4f;
        });

        // your own sound effects (Assets/Resources/Sfx/*.wav) replace the generated ones
        cCoin = LoadSfx("coin", cCoin);
        cJump = LoadSfx("jump", cJump);
        cRoll = LoadSfx("roll", cRoll);
        cPower = LoadSfx("powerup", cPower);
        cDodge = LoadSfx("dodge", null);
        cBox = LoadSfx("box", cPower);
        cMission = LoadSfx("mission", cPower);
        cUnlock = LoadSfx("unlock", cPower);
        cLetters = LoadSfx("letters", null);
        cMagnet = LoadSfx("magnet_loop", null);
        jingleSrc = gameObject.AddComponent<AudioSource>();
        magnetSrc = gameObject.AddComponent<AudioSource>();
        magnetSrc.loop = true;
        magnetSrc.volume = 0.45f;
        magnetSrc.clip = cMagnet;

        musicSrc.loop = true;
        var real = FindMusic();
        if (real != null) { musicSrc.clip = real; musicSrc.volume = 0.55f; }
        else { musicSrc.clip = MakeMusic(); musicSrc.volume = 0.35f; }
        musicSrc.Play();
    }

    static AudioClip Make(string name, float dur, System.Func<float, float> f)
    {
        int rate = 44100, n = (int)(rate * dur);
        var d = new float[n];
        for (int i = 0; i < n; i++) d[i] = Mathf.Clamp(f(i / (float)rate), -1f, 1f);
        var c = AudioClip.Create(name, n, 1, rate, false);
        c.SetData(d, 0);
        return c;
    }

    static AudioClip Tone(float f0, float f1, float dur, float vol, bool noise)
    {
        int rate = 44100, n = (int)(rate * dur);
        var d = new float[n];
        float ph = 0f;
        for (int i = 0; i < n; i++)
        {
            float t = i / (float)n;
            ph += 2f * Mathf.PI * Mathf.Lerp(f0, f1, t) / rate;
            float s = noise ? (Random.value * 2f - 1f) : Mathf.Sin(ph);
            d[i] = s * (1f - t) * vol;
        }
        var c = AudioClip.Create("sfx", n, 1, rate, false);
        c.SetData(d, 0);
        return c;
    }

    static AudioClip MakeMusic()
    {
        int rate = 22050, steps = 32;
        float step = 60f / 124f / 2f;
        int per = (int)(rate * step);
        var d = new float[per * steps];
        float[] bass = { 55f, 65.41f, 73.42f, 49f };
        float[] arp = {
            220f, 261.63f, 329.63f, 440f,   261.63f, 329.63f, 392f, 523.25f,
            293.66f, 349.23f, 440f, 587.33f, 246.94f, 293.66f, 392f, 493.88f };
        for (int s = 0; s < steps; s++)
        {
            int chord = (s / 8) % 4;
            float bf = bass[chord], af = arp[chord * 4 + (s % 4)];
            for (int i = 0; i < per; i++)
            {
                int idx = s * per + i;
                float tt = idx / (float)rate, lt = i / (float)rate;
                float sq = Mathf.Sin(6.2832f * af * tt) > 0f ? 1f : -1f;
                float saw = ((tt * bf) % 1f) * 2f - 1f;
                d[idx] = sq * 0.07f * Mathf.Exp(-lt * 7f) + saw * 0.16f * Mathf.Exp(-lt * 2.5f);
            }
        }
        var c = AudioClip.Create("music", d.Length, 1, rate, false);
        c.SetData(d, 0);
        return c;
    }

    void Play(AudioClip c, float v) { sfx.PlayOneShot(c, v); }

    // ------------------------------------------------------------------ UI
    void BuildUI()
    {
        ui = UIKit.Root();

        Vector2 TL = new Vector2(0, 1), TR = new Vector2(1, 1), C = new Vector2(0.5f, 0.5f);
        Color dark = new Color(0, 0, 0, 0.55f);

        // ---- HUD
        var h = UIKit.Full(ui, "HUD", new Color(0, 0, 0, 0));
        hud = h;
        // pause: top-left   |   score, coins, boxes: top-right (like the real game)
        buttons.Add(UIKit.Button(h, "II", 44, TL, new Vector2(20, -20), new Vector2(96, 96), dark, DoPause));
        tMulti = UIKit.Label(h, "x1", 44, TR, new Vector2(-330, -30), new Vector2(150, 60), TextAnchor.MiddleRight, new Color(1f, 0.85f, 0.2f));
        tMulti.outline = 3f;
        tScore = UIKit.Label(h, "000000", 68, TR, new Vector2(-24, -24), new Vector2(300, 80), TextAnchor.MiddleRight, Color.white);
        tScore.outline = 3f;
        tCoins = UIKit.Label(h, "0", 46, TR, new Vector2(-76, -108), new Vector2(300, 56), TextAnchor.MiddleRight, new Color(1f, 0.85f, 0.2f));
        UIKit.Box(h, "coinIcon", TR, new Vector2(-30, -118), new Vector2(36, 36), new Color(1f, 0.78f, 0.15f));
        tBoxes = UIKit.Label(h, "0", 38, TR, new Vector2(-76, -166), new Vector2(300, 48), TextAnchor.MiddleRight, new Color(0.8f, 0.55f, 1f));
        UIKit.Box(h, "boxIcon", TR, new Vector2(-30, -172), new Vector2(34, 34), new Color(0.65f, 0.3f, 1f));

        Color[] pc = { new Color(1f, 0.4f, 0.4f), new Color(1f, 0.85f, 0.2f), new Color(0.8f, 0.8f, 0.9f),
                       new Color(0.3f, 1f, 1f), new Color(0.4f, 0.6f, 1f), new Color(1f, 0.4f, 0.8f) };
        for (int i = 0; i < 6; i++)
            tPower[i] = UIKit.Label(h, "", 30, TL, new Vector2(24, -140 - i * 42), new Vector2(480, 36), TextAnchor.MiddleLeft, pc[i]);
        for (int i = 0; i < 6; i++)
            bPower[i] = UIKit.Box(h, "bar", TL, new Vector2(24, -140 - i * 42 - 34), new Vector2(0, 6), pc[i]);
        BuildMissionHud(h);
        tToast = UIKit.Label(h, "", 54, new Vector2(0.5f, 0.78f), Vector2.zero, new Vector2(1000, 100), TextAnchor.MiddleCenter, new Color(1f, 0.9f, 0.3f));

        // ---- Home (the animated Tokyo night scene shows through; text sits on dark bands so it is easy to read)
        var hp = UIKit.Full(ui, "Home", new Color(0, 0, 0, 0));
        homePanel = hp;
        Vector2 T = new Vector2(0.5f, 1f), B = new Vector2(0.5f, 0f), M = new Vector2(0.5f, 0.5f);
        UIKit.Box(hp, "topBand", T, Vector2.zero, new Vector2(6000, 290), new Color(0.03f, 0.01f, 0.1f, 0.55f));
        UIKit.Box(hp, "botBand", B, Vector2.zero, new Vector2(6000, 250), new Color(0.03f, 0.01f, 0.1f, 0.55f));

        var logoBack = UIKit.Label(hp, "SUBWAY SURFERS", 104, T, new Vector2(5, -17), new Vector2(1060, 130), TextAnchor.MiddleCenter, new Color(1f, 0.2f, 0.6f));
        logoBack.outline = 5f;
        var logo = UIKit.Label(hp, "SUBWAY SURFERS", 104, T, new Vector2(0, -12), new Vector2(1060, 130), TextAnchor.MiddleCenter, new Color(1f, 0.85f, 0.15f));
        logo.outline = 5f;
        var banner = UIKit.Box(hp, "banner", T, new Vector2(0, -150), new Vector2(560, 72), new Color(0.85f, 0.1f, 0.15f));
        UIKit.Box(banner, "edge", B, Vector2.zero, new Vector2(560, 7), new Color(0, 0, 0, 0.3f));
        UIKit.Label(banner, "TOKYO NIGHT", 50, M, Vector2.zero, new Vector2(560, 72), TextAnchor.MiddleCenter, Color.white);
        tHomeBest = UIKit.Label(hp, "", 34, T, new Vector2(0, -232), new Vector2(1000, 46), TextAnchor.MiddleCenter, Color.white);

        buttons.Add(UIKit.Button(hp, "PLAY", 74, B, new Vector2(0, 106), new Vector2(480, 120), new Color(0.2f, 0.75f, 0.3f), StartRun));
        buttons.Add(UIKit.Button(hp, "HOW TO PLAY", 28, B, new Vector2(-290, 20), new Vector2(270, 72), new Color(0.25f, 0.5f, 0.85f), OpenHelp));
        buttons.Add(UIKit.Button(hp, "MISSIONS", 28, B, new Vector2(0, 20), new Vector2(270, 72), new Color(0.9f, 0.5f, 0.2f), OpenMissions));
        buttons.Add(UIKit.Button(hp, "SHOP", 28, B, new Vector2(290, 20), new Vector2(270, 72), new Color(0.55f, 0.3f, 0.9f), OpenShop));

        BuildHelp();
        BuildMissions();
        BuildShop();

        // ---- Pause
        var pp = UIKit.Full(ui, "Pause", new Color(0, 0, 0, 0.6f));
        pausePanel = pp;
        UIKit.Label(pp, "PAUSED", 100, new Vector2(0.5f, 0.65f), Vector2.zero, new Vector2(800, 140), TextAnchor.MiddleCenter, Color.white);
        buttons.Add(UIKit.Button(pp, "RESUME", 60, new Vector2(0.5f, 0.5f), Vector2.zero, new Vector2(480, 130), new Color(0.2f, 0.75f, 0.3f), DoResume));
        buttons.Add(UIKit.Button(pp, "HOME", 60, new Vector2(0.5f, 0.4f), Vector2.zero, new Vector2(480, 130), new Color(0.25f, 0.5f, 0.85f), GoHome));

        // ---- Game over
        var op = UIKit.Full(ui, "Over", new Color(0, 0, 0, 0.55f));
        overPanel = op;
        var card = UIKit.Box(op, "card", C, Vector2.zero, new Vector2(760, 980), new Color(0.2f, 0.13f, 0.09f, 0.96f));
        Color grey = new Color(1, 1, 1, 0.7f);
        UIKit.Label(card, "GAME OVER", 96, C, new Vector2(0, 380), new Vector2(740, 130), TextAnchor.MiddleCenter, new Color(0.98f, 0.82f, 0.3f));
        UIKit.Label(card, "SCORE", 34, C, new Vector2(0, 270), new Vector2(600, 50), TextAnchor.MiddleCenter, grey);
        tOverScore = UIKit.Label(card, "00000", 120, C, new Vector2(0, 190), new Vector2(700, 150), TextAnchor.MiddleCenter, Color.white);
        UIKit.Label(card, "BEST SCORE", 34, C, new Vector2(0, 80), new Vector2(600, 50), TextAnchor.MiddleCenter, grey);
        tOverBest = UIKit.Label(card, "00000", 90, C, new Vector2(0, 10), new Vector2(700, 120), TextAnchor.MiddleCenter, new Color(1f, 0.85f, 0.4f));
        reviveBtn = UIKit.Button(card, "REVIVE  (100 coins)", 46, C, new Vector2(0, -150), new Vector2(580, 120), new Color(0.35f, 0.65f, 0.3f), DoRevive);
        buttons.Add(reviveBtn);
        buttons.Add(UIKit.Button(card, "HOME", 52, C, new Vector2(-160, -300), new Vector2(280, 115), new Color(0.25f, 0.5f, 0.85f), GoHome));
        buttons.Add(UIKit.Button(card, "RETRY", 52, C, new Vector2(160, -300), new Vector2(280, 115), new Color(0.9f, 0.5f, 0.25f), StartRun));
        fade = UIKit.Full(ui, "fade", new Color(0, 0, 0, 1));   // drawn last = always on top
    }

    void BuildHelp()
    {
        var hp = UIKit.Full(ui, "Help", new Color(0.04f, 0.02f, 0.1f, 0.94f));
        helpPanel = hp;
        var ML = TextAnchor.MiddleLeft;
        Vector2 C = new Vector2(0.5f, 0.5f);
        var t = UIKit.Label(hp, "HOW TO PLAY", 84, new Vector2(0.5f, 0.935f), Vector2.zero, new Vector2(1000, 110), TextAnchor.MiddleCenter, new Color(1f, 0.85f, 0.15f));
        t.outline = 4f;

        // arrow-key cluster
        Color key = new Color(0.22f, 0.22f, 0.36f);
        Vector2 anc = new Vector2(0.5f, 0.82f);
        string[] kn = { "UP", "LEFT", "DOWN", "RIGHT" };
        Vector2[] kp = { new Vector2(0, 96), new Vector2(-100, 0), new Vector2(0, 0), new Vector2(100, 0) };
        for (int i = 0; i < 4; i++)
        {
            var kb = UIKit.Box(hp, "key", anc, kp[i], new Vector2(92, 86), key);
            UIKit.Box(kb, "shade", new Vector2(0.5f, 0f), Vector2.zero, new Vector2(92, 10), new Color(0, 0, 0, 0.35f));
            UIKit.Label(kb, kn[i], 22, C, Vector2.zero, new Vector2(92, 86), TextAnchor.MiddleCenter, Color.white);
        }

        UIKit.Label(hp, "LEFT / RIGHT  (A / D)   =   CHANGE LANE", 34, new Vector2(0f, 0.675f), new Vector2(40f, 0f), new Vector2(1000, 46), ML, new Color(0.3f, 1f, 1f));
        UIKit.Label(hp, "UP  (W / SPACE)   =   JUMP over barriers", 34, new Vector2(0f, 0.63f), new Vector2(40f, 0f), new Vector2(1000, 46), ML, new Color(1f, 0.9f, 0.3f));
        UIKit.Label(hp, "DOWN  (S)   =   ROLL under bars, drop fast", 34, new Vector2(0f, 0.585f), new Vector2(40f, 0f), new Vector2(1000, 46), ML, new Color(1f, 0.5f, 0.8f));
        UIKit.Label(hp, "ESC / P   =   PAUSE", 34, new Vector2(0f, 0.54f), new Vector2(40f, 0f), new Vector2(1000, 46), ML, Color.white);
        UIKit.Label(hp, "On a phone: swipe left / right / up / down", 28, new Vector2(0f, 0.50f), new Vector2(40f, 0f), new Vector2(1000, 40), ML, new Color(1, 1, 1, 0.65f));

        UIKit.Label(hp, "POWER-UPS", 46, new Vector2(0f, 0.445f), new Vector2(40f, 0f), new Vector2(800, 60), ML, new Color(1f, 0.85f, 0.15f));
        string[] pt = { "MAGNET  -  pulls coins to you", "2X SCORE  -  double points", "JETPACK  -  fly over trains",
                        "SPEED BOOST  -  smash through trains", "SCORE BOOST  -  bonus points",
                        "HOVERBOARD  -  saves you from one crash", "MYSTERY BOX  -  coins or a random power-up" };
        Kind[] pk = { Kind.Magnet, Kind.Mult, Kind.Jetpack, Kind.Speed, Kind.ScoreBoost, Kind.Hover, Kind.Box };
        for (int i = 0; i < pt.Length; i++)
        {
            float y = 0.395f - i * 0.04f;
            UIKit.Box(hp, "icon", new Vector2(0f, y), new Vector2(40f, 0f), new Vector2(34, 34), PowerColor(pk[i]));
            UIKit.Label(hp, pt[i], 30, new Vector2(0f, y), new Vector2(100f, 0f), new Vector2(900, 40), ML, Color.white);
        }
        UIKit.Label(hp, "Hit a barrier: the Inspector chases you. Hit again = game over.", 26, new Vector2(0.5f, 0.1f), Vector2.zero, new Vector2(1040, 36), TextAnchor.MiddleCenter, new Color(1, 1, 1, 0.7f));
        buttons.Add(UIKit.Button(hp, "BACK", 54, new Vector2(0.5f, 0.045f), Vector2.zero, new Vector2(360, 80), new Color(0.2f, 0.75f, 0.3f), CloseHelp));
        hp.SetActive(false);
    }

    void OpenHelp() { homePanel.SetActive(false); helpPanel.SetActive(true); }
    void CloseHelp() { helpPanel.SetActive(false); homePanel.SetActive(true); }

    void UpdateSkinLabel() { tSkin.text = skinNames[skin] + "   " + (skin + 1) + "/" + skinNames.Length; }

    void ChangeSkin(int d)
    {
        skin = (skin + d + skinNames.Length) % skinNames.Length;
        PlayerPrefs.SetInt("nr_skin", skin);
        runner.SetSkin(skinTint[skin]);
        UpdateSkinLabel();
        Play(cPower, 0.5f);
        if (Fx.I != null) Fx.I.Burst(runner.transform.position + Vector3.up, SkinGlow(), 24, 5f, 0.12f, 0.7f, 2f, 3f);
    }

    Color SkinGlow()
    {
        Color t = skinTint[skin];
        float m = Mathf.Max(t.r, Mathf.Max(t.g, t.b));
        return new Color(Mathf.Clamp01(t.r / m), Mathf.Clamp01(t.g / m), Mathf.Clamp01(t.b / m));
    }

    string TutorialHint()
    {
        if (tutDone) return "";
        if (distance < 22f) return "LEFT / RIGHT  (swipe)  =  CHANGE LANE";
        if (distance < 46f) return "UP / SPACE  (swipe up)  =  JUMP";
        if (distance < 70f) return "DOWN  (swipe down)  =  ROLL";
        tutDone = true;
        PlayerPrefs.SetInt("nr_tut", 1);
        return "";
    }

    bool ClickButtons(Vector2 p)
    {
        for (int i = buttons.Count - 1; i >= 0; i--)
        {
            var b = buttons[i];
            if (b.rt != null && b.rt.ActiveInHierarchy && UIKit.Hit(b.rt, p))
            {
                b.click();
                return true;
            }
        }
        return false;
    }

    Transform homeSet;
    readonly List<Transform> homeLanterns = new List<Transform>();

    void BuildHomeSet()
    {
        if (homeSet != null) Destroy(homeSet.gameObject);
        homeLanterns.Clear();
        homeSet = new GameObject("HomeSet").transform;
        homeSet.SetParent(worldRoot, false);
        var C = PrimitiveType.Cube;
        float z = -16f;
        Gfx.Prim(C, homeSet, new Vector3(-5.2f, 6f, z), new Vector3(1.0f, 12f, 1.0f), mTorii, "pillar");
        Gfx.Prim(C, homeSet, new Vector3(5.2f, 6f, z), new Vector3(1.0f, 12f, 1.0f), mTorii, "pillar");
        Gfx.Prim(C, homeSet, new Vector3(0, 12.4f, z), new Vector3(14f, 1.0f, 1.3f), mTorii, "beam");
        Gfx.Prim(C, homeSet, new Vector3(0, 13.2f, z), new Vector3(16.5f, 0.4f, 1.9f), mDark, "cap");
        Gfx.Prim(C, homeSet, new Vector3(0, 10.2f, z), new Vector3(12f, 0.6f, 0.9f), mTorii, "beam2");
        Gfx.Prim(C, homeSet, new Vector3(0, 11.3f, z + 0.1f), new Vector3(1.3f, 1.6f, 0.3f), mYellow, "plaque");
        var lm = Gfx.Mat(new Color(1f, 0.3f, 0.1f), 3f);
        for (int i = 0; i < 9; i++)
        {
            var l = Gfx.Prim(PrimitiveType.Sphere, homeSet, new Vector3(-4.8f + i * 1.2f, 8.9f, z + 0.2f), new Vector3(0.75f, 0.95f, 0.75f), lm, "lantern");
            homeLanterns.Add(l.transform);
        }
        Gfx.Prim(PrimitiveType.Sphere, homeSet, new Vector3(-6f, 30f, -92f), Vector3.one * 13f, Gfx.Mat(new Color(1f, 0.95f, 0.78f), 2.2f), "moon");
        var starM = Gfx.Mat(new Color(1f, 1f, 0.9f), 3f);
        for (int i = 0; i < 60; i++)
            Gfx.Prim(C, homeSet, new Vector3(Random.Range(-70f, 70f), Random.Range(20f, 70f), Random.Range(-100f, -88f)), Vector3.one * Random.Range(0.3f, 0.7f), starM, "star");
        var cableM = Gfx.Mat(new Color(0.05f, 0.05f, 0.08f));
        for (int i = 0; i < 6; i++)
            Gfx.Prim(C, homeSet, new Vector3(-6f + i * 2.4f, 10.5f + (i % 3) * 0.8f, -30f), new Vector3(0.06f, 0.06f, 70f), cableM, "cable");
        var trunk = Gfx.Mat(new Color(0.3f, 0.18f, 0.12f));
        var bloom = Gfx.Mat(new Color(1f, 0.6f, 0.8f), 0.7f);
        for (int s = -1; s <= 1; s += 2)
            for (int k = 0; k < 5; k++)
            {
                float tz = -4f - k * 5.5f, tx = s * (6.8f + (k % 2) * 1.5f);
                Gfx.Prim(PrimitiveType.Cylinder, homeSet, new Vector3(tx, 1.8f, tz), new Vector3(0.45f, 1.8f, 0.45f), trunk, "trunk");
                Gfx.Prim(PrimitiveType.Sphere, homeSet, new Vector3(tx, 4.8f, tz), new Vector3(4.2f, 3.2f, 4.2f), bloom, "bloom");
                Gfx.Prim(PrimitiveType.Sphere, homeSet, new Vector3(tx + s * 1.2f, 4.0f, tz + 1.4f), new Vector3(2.6f, 2.0f, 2.6f), bloom, "bloom");
            }
    }

    void HomeFx(float dt)
    {
        float t = Time.time;
        for (int i = 0; i < homeLanterns.Count; i++)
            if (homeLanterns[i] != null)
                homeLanterns[i].localScale = new Vector3(0.75f, 0.95f * (1f + 0.07f * Mathf.Sin(t * 3f + i)), 0.75f);
        if (Fx.I != null && Random.value < 0.4f)
        {
            Vector3 p = runner.transform.position;
            Fx.I.Spawn(p + new Vector3(Random.Range(-7f, 7f), Random.Range(4f, 9f), Random.Range(-14f, 4f)),
                       new Vector3(Random.Range(-0.8f, 0.1f), -1.1f, Random.Range(-0.2f, 0.2f)),
                       new Color(1f, 0.72f, 0.85f), 0.11f, 5f, 0f, 1.2f);
        }
    }

    void OnGUI() { if (ui != null) UIKit.Draw(ui); }

    void Toast(string s) { tToast.text = s; toastT = 1.8f; }

    // ------------------------------------------------------------------ state changes
    void ResetRun()
    {
        for (int i = 0; i < chunks.Count; i++) Destroy(chunks[i].go);
        chunks.Clear();
        items.Clear();
        nextChunkZ = -ChunkLen * 2f;
        slabIdx = 0;
        rowCooldown = 0;
        runner.ResetRunner();
        chaser.Hide();
        if (Fx.I != null) Fx.I.Clear();
        if (shieldGo != null) shieldGo.SetActive(false);
        ResetGlow();
        bufJump = 0f;
        curSpeed = 0; distance = 0; scoreF = 0; runCoins = 0; boxes = 0;
        tMagnet = tMult = tJet = tSpeed = tBoost = tHover = 0f;
        grace = 0; chaserT = 0; penaltyT = 0; shakeT = 0; deadWait = 0;
        stumbled = false; revived = false;
        UpdateWorld();
    }

    void ShowOnly(bool home, bool pause, bool over)
    {
        shopOpen = false;
        if (helpPanel != null) helpPanel.SetActive(false);
        if (missionPanel != null) missionPanel.SetActive(false);
        if (shopPanel != null) shopPanel.SetActive(false);
        homePanel.SetActive(home);
        pausePanel.SetActive(pause);
        overPanel.SetActive(over);
    }

    void GoHome()
    {
        Time.timeScale = 1f; slowT = 0f; fadeA = 1f; fadeTarget = 0f;
        PlayJingle(cLetters, 0.8f, 3f);
        ResetRun();
        state = State.Home;
        BuildHomeSet();
        tHomeBest.text = "BEST  " + best.ToString("D5") + "      COINS  " + bank;
        ShowOnly(true, false, false);
    }

    void StartRun()
    {
        Time.timeScale = 1f; slowT = 0f; fadeA = 1f; fadeTarget = 0f;
        ResetRun();
        if (homeSet != null) Destroy(homeSet.gameObject);
        state = State.Playing;
        ShowOnly(false, false, false);
    }

    void DoPause() { if (state == State.Playing) { state = State.Paused; ShowOnly(false, true, false); } }
    void DoResume() { if (state == State.Paused) { state = State.Playing; ShowOnly(false, false, false); } }

    void Die()
    {
        state = State.Dead;
        runner.Die();
        runner.SetFlicker(false);
        runner.SetJet(false);
        runner.SetHover(false);
        tMagnet = tMult = tJet = tSpeed = tBoost = tHover = 0f;
        if (shieldGo != null) shieldGo.SetActive(false);
        ResetGlow();
        shakeT = 0.4f;
        deadWait = 1.0f;
        Time.timeScale = 0.3f; slowT = 0.45f;
        Play(cCrash, 1f);
        if (Score > best) { best = Score; PlayerPrefs.SetInt("nr_best", best); }
        SaveMissions();
        PlayerPrefs.SetInt("nr_coins", bank);
        PlayerPrefs.Save();
    }

    void ShowOver()
    {
        tOverScore.text = Score.ToString("D5");
        tOverBest.text = best.ToString("D5");
        reviveBtn.label.text = revived ? "REVIVE USED" : "REVIVE  (100 coins)";
        ShowOnly(false, false, true);
    }

    void DoRevive()
    {
        if (revived) { Toast("REVIVE ALREADY USED"); return; }
        if (bank < 100) { Toast("NEED 100 COINS"); return; }
        bank -= 100;
        PlayerPrefs.SetInt("nr_coins", bank);
        revived = true;
        Vector3 p = runner.transform.position;
        for (int i = 0; i < items.Count; i++)
        {
            var it = items[i];
            if (it != null && it.IsObstacle && it.transform.position.z > p.z - 6f && it.transform.position.z < p.z + 60f)
            { it.done = true; it.gameObject.SetActive(false); }
        }
        Time.timeScale = 1f; slowT = 0f; fadeA = 0.8f; fadeTarget = 0f;
        runner.Revive();
        runner.lane = Mathf.Clamp(Mathf.RoundToInt(p.x / LW), -1, 1);
        grace = 3f; stumbled = false; chaserT = 0f;
        state = State.Playing;
        ShowOnly(false, false, false);
    }

    // ------------------------------------------------------------------ per-frame
    void Update()
    {
        float dt = Mathf.Min(Time.deltaTime, 0.05f);
        if (slowT > 0f) { slowT -= Time.unscaledDeltaTime; if (slowT <= 0f) Time.timeScale = 1f; }
        fadeA = Mathf.MoveTowards(fadeA, fadeTarget, Time.unscaledDeltaTime / 0.45f);
        fade.col = new Color(0.02f, 0.0f, 0.06f, fadeA);
        HandleInput();
        UpdateSfx();

        Vector3 p = runner.transform.position;
        switch (state)
        {
            case State.Home:
                runner.Tick(dt, 0f, false);
                HomeFx(dt);
                break;
            case State.Playing:
                PlayUpdate(dt);
                break;
            case State.Dead:
                runner.Tick(dt, 0f, false);
                chaser.Tick(p, stumbled, dt);
                deadWait -= dt;
                if (deadWait <= 0f && !overPanel.activeSelf) ShowOver();
                break;
        }

        UpdateWorld();
        AnimateItems(dt);
        UpdateHUD(dt);
        RefreshMissionUI();
    }

    void HandleInput()
    {
        if (Inp.Mute && musicSrc != null) musicSrc.mute = !musicSrc.mute;
        if (Inp.Rain) rainOn = !rainOn;
        Vector2 pd;
        if (Inp.PointerDown(out pd))
        {
            bool hit = ClickButtons(pd);
            swipeStart = pd;
            swipeOk = !hit;
        }

        if (state == State.Playing)
        {
            if (Inp.Left) DoMove(-1);
            if (Inp.Right) DoMove(1);
            if (Inp.Up) DoJump();
            if (Inp.Down) DoRoll();
            if (Inp.Pause) DoPause();

            Vector2 ph;
            if (swipeOk && Inp.PointerHeld(out ph))
            {
                Vector2 d = ph - swipeStart;
                if (d.magnitude > 70f)
                {
                    if (Mathf.Abs(d.x) > Mathf.Abs(d.y)) DoMove(d.x > 0 ? 1 : -1);
                    else if (d.y > 0) DoJump();
                    else DoRoll();
                    swipeStart = ph;
                }
            }
        }
        else if (state == State.Paused) { if (Inp.Pause) DoResume(); }
        else if (state == State.Home)
        {
            if (helpPanel.activeSelf || missionPanel.activeSelf || shopPanel.activeSelf)
            {
                if (Inp.Pause)
                {
                    if (helpPanel.activeSelf) CloseHelp();
                    else if (missionPanel.activeSelf) CloseMissions();
                    else CloseShop();
                }
            }
            else
            {
                if (Inp.Confirm) StartRun();
            }
        }
        else if (state == State.Dead && overPanel.activeSelf) { if (Inp.Confirm) StartRun(); }
    }

    void DoMove(int dir)
    {
        int before = runner.lane;
        runner.Move(dir);
        if (runner.lane != before && cDodge != null) Play(cDodge, 0.6f);
    }

    void DoJump()
    {
        if (runner.Jump()) { Play(cJump, 0.6f); MissionAdd(2, 1); }
        else bufJump = 0.15f;      // remembered for a moment so jumps never feel dropped
    }

    void DoRoll()
    {
        float before = runner.rollT;
        runner.Roll();
        if (runner.rollT > before) { Play(cRoll, 0.7f); MissionAdd(3, 1); }
    }

    static void Dec(ref float t, float dt) { if (t > 0f) t = Mathf.Max(0f, t - dt); }

    void PlayUpdate(float dt)
    {
        Dec(ref tMagnet, dt); Dec(ref tMult, dt); Dec(ref tBoost, dt); Dec(ref tHover, dt);
        Dec(ref grace, dt); Dec(ref penaltyT, dt);
        if (tHover <= 0f && runner.hover) runner.SetHover(false);
        if (tJet > 0f) { tJet -= dt; if (tJet <= 0f) { tJet = 0f; runner.SetJet(false); grace = Mathf.Max(grace, 1.2f); } }
        if (tSpeed > 0f) { tSpeed -= dt; if (tSpeed <= 0f) { tSpeed = 0f; grace = Mathf.Max(grace, 1.0f); } }
        if (chaserT > 0f) { chaserT -= dt; if (chaserT <= 0f) { chaserT = 0f; stumbled = false; } }

        float target = Mathf.Lerp(14f, 30f, Mathf.Clamp01(distance / 3500f));
        if (tSpeed > 0f) target *= 1.6f;
        if (tJet > 0f) target *= 1.3f;
        if (penaltyT > 0f) target *= 0.7f;
        curSpeed = Mathf.MoveTowards(curSpeed, target, 25f * dt);

        if (bufJump > 0f)
        {
            bufJump -= dt;
            if (runner.grounded && runner.Jump()) { Play(cJump, 0.6f); bufJump = 0f; }
        }
        runner.Tick(dt, curSpeed, true);
        PowerFx(dt);
        UpdateShield();
        RainFx();
        mDist += curSpeed * dt;
        if (mDist >= 5f) { int md = (int)mDist; mDist -= md; MissionAdd(1, md); }
        string hint = TutorialHint();
        if (hint != "") { tToast.text = hint; toastT = 0.3f; }
        runner.SetFlicker(grace > 0f);
        distance += curSpeed * dt;
        scoreF += curSpeed * dt * (tMult > 0f ? 2f : 1f) + (tBoost > 0f ? 60f * dt : 0f);

        CheckItems(dt);
        if (state == State.Playing) chaser.Tick(runner.transform.position, chaserT > 0f, dt);
    }

    static readonly Color gold = new Color(1f, 0.8f, 0.2f);

    Color PowerColor(Kind k)
    {
        switch (k)
        {
            case Kind.Magnet: return new Color(1f, 0.25f, 0.3f);
            case Kind.Mult: return gold;
            case Kind.Jetpack: return new Color(1f, 0.6f, 0.15f);
            case Kind.Speed: return new Color(0.3f, 1f, 1f);
            case Kind.ScoreBoost: return new Color(0.35f, 0.55f, 1f);
            case Kind.Hover: return new Color(1f, 0.3f, 0.75f);
            case Kind.Box: return new Color(0.7f, 0.35f, 1f);
        }
        return Color.white;
    }

    void PowerFx(float dt)
    {
        if (Fx.I == null) return;
        Vector3 p = runner.transform.position;
        float t = Time.time;
        float ratio = Mathf.Clamp01(curSpeed / 30f);

        // speed lines
        if ((curSpeed > 19f && Random.value < 0.5f) || (tSpeed > 0f))
        {
            int n = tSpeed > 0f ? 3 : 1;
            for (int i = 0; i < n; i++)
                Fx.I.Streak(new Vector3(p.x + Random.Range(-6f, 6f), Random.Range(0.3f, 5f), p.z + Random.Range(10f, 28f)),
                            new Color(0.7f, 0.9f, 1f), Mathf.Lerp(1.5f, 5f, ratio), 0.55f);
        }
        if (skin != 0 && Random.value < 0.6f)
            Fx.I.Spawn(p + new Vector3(Random.Range(-0.3f, 0.3f), Random.Range(0.2f, 1.6f), -0.3f), new Vector3(0, 0.2f, -3f), SkinGlow(), 0.09f, 0.45f, 0f, 3f);
        if (tMagnet > 0f)
        {
            for (int i = 0; i < 2; i++)
            {
                float a = t * 7f + i * Mathf.PI;
                Fx.I.Spawn(p + new Vector3(Mathf.Cos(a) * 1.4f, 0.9f + Mathf.Sin(t * 5f + i) * 0.35f, Mathf.Sin(a) * 1.4f),
                           Vector3.zero, i == 0 ? PowerColor(Kind.Magnet) : new Color(0.6f, 0.8f, 1f), 0.13f, 0.25f, 0f, 3f);
            }
        }
        if (tMult > 0f && Random.value < 0.5f)
            Fx.I.Spawn(p + new Vector3(Random.Range(-0.7f, 0.7f), Random.Range(0.2f, 2f), Random.Range(-0.4f, 0.4f)), Vector3.up * 1.5f, gold, 0.11f, 0.5f, 0f, 3f);
        if (tBoost > 0f && Random.value < 0.6f)
            Fx.I.Spawn(p + new Vector3(Random.Range(-0.7f, 0.7f), Random.Range(0.2f, 2f), Random.Range(-0.4f, 0.4f)), Vector3.up * 2f, PowerColor(Kind.ScoreBoost), 0.1f, 0.5f, 0f, 3f);
        if (tSpeed > 0f)
            Fx.I.Spawn(p + new Vector3(Random.Range(-0.4f, 0.4f), Random.Range(0.3f, 1.6f), -0.4f), new Vector3(0, 0, -8f), PowerColor(Kind.Speed), 0.14f, 0.35f, 0f, 3f);
        if (tHover > 0f && Random.value < 0.7f)
            Fx.I.Spawn(p + new Vector3(Random.Range(-0.3f, 0.3f), 0.05f, Random.Range(-0.5f, 0.5f)), new Vector3(0, 0.4f, -4f), PowerColor(Kind.Hover), 0.1f, 0.35f, 0f, 3f);
    }

    void AddCoins(int n)
    {
        coinPunch = 1f;
        MissionAdd(0, n);
        runCoins += n;
        bank += n;
        PlayerPrefs.SetInt("nr_coins", bank);
    }

    bool onRampNow;

    void CheckItems(float dt)
    {
        Vector3 p = runner.transform.position;
        float h = runner.Height;
        bool jet = tJet > 0f;

        // pass 1: move oncoming trains, then find what is under the player's feet (ground / ramp / roof)
        float ground = 0f;
        bool onRamp = false;
        for (int i = items.Count - 1; i >= 0; i--)
        {
            var it = items[i];
            if (it == null) { items.RemoveAt(i); continue; }
            if (it.done) continue;
            if (it.vz != 0f) it.transform.position += new Vector3(0f, 0f, it.vz * dt);
            if (it.kind != Kind.Train && it.kind != Kind.Ramp && it.kind != Kind.Cargo) continue;
            Vector3 ip0 = it.transform.position;
            if (Mathf.Abs(ip0.z - p.z) > it.halfZ + 0.2f || Mathf.Abs(ip0.x - p.x) > it.halfX + 0.1f) continue;
            if (it.kind == Kind.Ramp)
            {
                float tt = Mathf.Clamp01((p.z - (ip0.z - it.halfZ)) / (2f * it.halfZ));
                ground = Mathf.Max(ground, it.top * tt);
                onRamp = true;
            }
            else if (p.y >= it.top - 0.4f) ground = Mathf.Max(ground, it.top);   // standing on a roof
        }
        runner.groundY = ground;
        onRampNow = onRamp;

        // pass 2: coins, power-ups, obstacles
        for (int i = items.Count - 1; i >= 0; i--)
        {
            var it = items[i];
            if (it == null) { items.RemoveAt(i); continue; }
            if (it.done || it.kind == Kind.Ramp) continue;
            Vector3 ip = it.transform.position;
            float dz = ip.z - p.z;
            if (dz > 30f) continue;

            if (it.kind == Kind.Coin)
            {
                if (tMagnet > 0f && dz > -2f && dz < 14f && Mathf.Abs(ip.x - p.x) < 7f)
                {
                    ip = Vector3.MoveTowards(ip, p + Vector3.up * 0.9f, 45f * dt);
                    it.transform.position = ip;
                    dz = ip.z - p.z;
                }
                if (Mathf.Abs(dz) < 0.9f && Mathf.Abs(ip.x - p.x) < 1.2f && (jet || Mathf.Abs(ip.y - (p.y + 0.9f)) < 1.4f))
                {
                    it.done = true; it.gameObject.SetActive(false);
                    AddCoins(1);
                    Play(cCoin, 0.5f);
                    if (Fx.I != null) Fx.I.Burst(ip, gold, 5, 3.5f, 0.09f, 0.3f, 5f, 3f);
                }
            }
            else if (it.IsPower || it.kind == Kind.Box)
            {
                if (Mathf.Abs(dz) < 1.1f && Mathf.Abs(ip.x - p.x) < 1.3f && (jet || Mathf.Abs(ip.y - (p.y + 0.9f)) < 1.7f))
                {
                    it.done = true; it.gameObject.SetActive(false);
                    if (it.kind == Kind.Box) PlayJingle(cBox, 0.9f, 3.5f); else Play(cPower, 0.8f);
                    if (Fx.I != null) Fx.I.Burst(ip, PowerColor(it.kind), 22, 6f, 0.14f, 0.6f, 4f, 3f);
                    if (it.kind == Kind.Box) OpenBox();
                    else { Activate(it.kind); Toast(PowerName(it.kind)); }
                }
            }
            else
            {
                if (onRamp && it.kind == Kind.Train) continue;           // running up the ramp onto the train
                float topLimit = it.kind == Kind.Overhead ? it.top : it.top - 0.4f;   // landing on top is safe
                if (Mathf.Abs(dz) < it.halfZ + 0.3f && Mathf.Abs(ip.x - p.x) < it.halfX + 0.3f &&
                    p.y < topLimit && p.y + h > it.bottom)
                {
                    Crash(it);
                    if (state != State.Playing) return;
                }
            }
        }
    }

    void Crash(Item it)
    {
        if (Fx.I != null && !(tJet > 0f || grace > 0f)) Fx.I.Burst(runner.transform.position + Vector3.up, new Color(1f, 0.5f, 0.2f), 14, 6f, 0.15f, 0.5f, 8f, 2.5f);
        if (tSpeed > 0f)
        {
            it.done = true; it.gameObject.SetActive(false);
            shakeT = 0.2f; Play(cCrash, 0.5f);
            return;
        }
        if (tJet > 0f || grace > 0f) return;
        if (tHover > 0f)
        {
            tHover = 0f; runner.SetHover(false); grace = 2f;
            if (Fx.I != null) Fx.I.Burst(runner.transform.position + Vector3.up * 0.95f, PowerColor(Kind.Hover), 40, 7f, 0.13f, 0.8f, 2f, 3f);
            it.done = true; it.gameObject.SetActive(false);
            shakeT = 0.3f; Play(cCrash, 0.6f);
            Toast("HOVERBOARD SAVED YOU!");
            return;
        }
        bool light = it.kind == Kind.Barrier || it.kind == Kind.Overhead;
        if (light && !stumbled)
        {
            stumbled = true; chaserT = 9f; grace = 1.2f; penaltyT = 1f;
            runner.Stumble();
            it.done = true; it.gameObject.SetActive(false);
            shakeT = 0.3f; Play(cCrash, 0.6f);
            Toast("WATCH OUT! INSPECTOR!");
            return;
        }
        Die();
    }

    void Activate(Kind k)
    {
        MissionAdd(4, 1);
        lastPower = k;
        switch (k)
        {
            case Kind.Magnet: tMagnet = 10f; break;
            case Kind.Mult: tMult = 10f; break;
            case Kind.Jetpack: tJet = 6f; runner.SetJet(true); break;
            case Kind.Speed: tSpeed = 6f; break;
            case Kind.ScoreBoost: tBoost = 8f; break;
            case Kind.Hover: tHover = 15f; runner.SetHover(true); break;
        }
    }

    static string PowerName(Kind k)
    {
        switch (k)
        {
            case Kind.Magnet: return "COIN MAGNET!";
            case Kind.Mult: return "2X SCORE!";
            case Kind.Jetpack: return "JETPACK!";
            case Kind.Speed: return "SPEED BOOST!";
            case Kind.ScoreBoost: return "SCORE BOOST!";
            case Kind.Hover: return "HOVERBOARD!";
        }
        return "";
    }

    static Kind RandomPower() { return powerOrder[Random.Range(0, powerOrder.Length)]; }

    void OpenBox()
    {
        boxes++;
        MissionAdd(5, 1);
        if (Random.Range(0, 4) == 0)
        {
            int c = Random.Range(5, 16) * 10;
            AddCoins(c);
            Toast("MYSTERY BOX!  +" + c + " COINS");
        }
        else
        {
            Kind k = RandomPower();
            Activate(k);
            Toast("MYSTERY BOX!  " + PowerName(k));
        }
    }

    float GetT(Kind k)
    {
        switch (k)
        {
            case Kind.Magnet: return tMagnet;
            case Kind.Mult: return tMult;
            case Kind.Jetpack: return tJet;
            case Kind.Speed: return tSpeed;
            case Kind.ScoreBoost: return tBoost;
            case Kind.Hover: return tHover;
        }
        return 0f;
    }

    void UpdateHUD(float dt)
    {
        hud.SetActive(state != State.Home);
        tCoins.text = runCoins.ToString();
        coinPunch = Mathf.MoveTowards(coinPunch, 0f, 5f * dt);
        tCoins.fontSize = 46 + (int)(18f * coinPunch);
        tScore.text = Score.ToString("D6");
        tMulti.text = "x" + (tMult > 0f ? 2 : 1);
        tBoxes.text = boxes.ToString();
        for (int i = 0; i < 6; i++)
        {
            float t = GetT(powerOrder[i]);
            tPower[i].text = t > 0f ? PowerName(powerOrder[i]).TrimEnd('!') + "  " + Mathf.CeilToInt(t) : "";
            bPower[i].size = new Vector2(t > 0f ? 300f * Mathf.Clamp01(t / powerMax[i]) : 0f, 6f);
        }
        if (toastT > 0f) { toastT -= dt; if (toastT <= 0f) tToast.text = ""; }
    }

    void AnimateItems(float dt)
    {
        float t = Time.time;
        for (int i = items.Count - 1; i >= 0; i--)
        {
            var it = items[i];
            if (it == null) { items.RemoveAt(i); continue; }
            if (it.done || it.spin == null) continue;
            it.spin.Rotate(0, (it.kind == Kind.Coin ? 200f : 120f) * dt, 0, Space.Self);
            if (it.halo != null)
            {
                it.halo.localRotation = Quaternion.Euler(0, 0, t * 45f);
                it.halo.localScale = Vector3.one * (1f + 0.12f * Mathf.Sin(t * 5f + it.baseY));
            }
            if (it.kind != Kind.Coin)
            {
                var pp = it.transform.position;
                pp.y = it.baseY + Mathf.Sin(t * 3f + pp.z) * 0.15f;
                it.transform.position = pp;
            }
        }
    }

    // ------------------------------------------------------------------ camera
    void LateUpdate()
    {
        if (runner == null) return;
        float dt = Time.deltaTime;
        Vector3 p = runner.transform.position;
        Vector3 pos, look;
        if (state == State.Home)
        {
            float a = Time.time * 0.35f;
            pos = p + new Vector3(Mathf.Sin(a) * 1.4f, 1.35f + 0.1f * Mathf.Sin(Time.time * 0.7f), 4.0f + Mathf.Cos(a) * 0.4f);
            look = p + new Vector3(0, shopOpen ? -0.4f : 1.25f, -2f);
        }
        else
        {
            pos = new Vector3(p.x * 0.7f, 4.9f + p.y * 0.45f, p.z - 8.6f);
            look = new Vector3(p.x * 0.4f, 1.6f + p.y * 0.5f, p.z + 10f);
        }
        float k = 1f - Mathf.Exp(-10f * dt);
        Vector3 cp = Vector3.Lerp(cam.transform.position, pos, k);
        cp.z = pos.z;
        if (shakeT > 0f) { shakeT -= dt; cp += Random.insideUnitSphere * 0.25f * Mathf.Clamp01(shakeT / 0.4f); }
        cam.transform.position = cp;
        Quaternion rot = Quaternion.LookRotation(look - cp) * Quaternion.Euler(0, 0, state == State.Playing ? -runner.Lean * 2.5f : 0f);
        cam.transform.rotation = Quaternion.Slerp(cam.transform.rotation, rot, k);
        cam.fieldOfView = Mathf.Lerp(cam.fieldOfView, 60f + curSpeed * 0.3f + (tSpeed > 0f ? 8f : 0f), 4f * dt);
    }

    // ------------------------------------------------------------------ world generation
    void UpdateWorld()
    {
        float pz = runner.transform.position.z;
        while (nextChunkZ < pz + 200f) SpawnChunk();
        for (int i = chunks.Count - 1; i >= 0; i--)
        {
            if (chunks[i].endZ < pz - 45f) { Destroy(chunks[i].go); chunks.RemoveAt(i); }
        }
    }

    void AddRoof(Transform root, int s, float edge, float bx, float h, float cz, float bz)
    {
        Color[] rc = { new Color(0.5f, 0.12f, 0.12f), new Color(0.2f, 0.26f, 0.42f), new Color(0.32f, 0.32f, 0.36f) };
        var m = Gfx.Mat(rc[Random.Range(0, rc.Length)], 0.15f);
        float ang = 32f, run = bx / 2f;
        float rise = run * Mathf.Tan(ang * Mathf.Deg2Rad);
        float len = run / Mathf.Cos(ang * Mathf.Deg2Rad) + 0.3f;
        float cx = s * (edge + bx / 2f);
        for (int k = -1; k <= 1; k += 2)
        {
            var r = Gfx.Prim(PrimitiveType.Cube, root, new Vector3(cx + k * run / 2f, h + rise / 2f + 0.05f, cz), new Vector3(len, 0.3f, bz + 0.5f), m, "roof");
            r.transform.localRotation = Quaternion.Euler(0, 0, -k * ang);
        }
    }

    void AddCherryTree(Transform root, int s, float tz)
    {
        var trunk = Gfx.Mat(new Color(0.3f, 0.18f, 0.12f));
        var bloom = Gfx.Mat(new Color(1f, 0.6f, 0.8f), 0.6f);
        var bloom2 = Gfx.Mat(new Color(1f, 0.75f, 0.9f), 0.6f);
        Gfx.Prim(PrimitiveType.Cylinder, root, new Vector3(s * 5.7f, 1.6f, tz), new Vector3(0.35f, 1.6f, 0.35f), trunk, "trunk");
        Gfx.Prim(PrimitiveType.Sphere, root, new Vector3(s * 5.7f, 4.2f, tz), new Vector3(3.0f, 2.3f, 3.0f), bloom, "bloom");
        Gfx.Prim(PrimitiveType.Sphere, root, new Vector3(s * 6.3f, 3.5f, tz + 1.3f), new Vector3(1.9f, 1.5f, 1.9f), bloom2, "bloom");
        Gfx.Prim(PrimitiveType.Sphere, root, new Vector3(s * 6.0f, 3.7f, tz - 1.3f), new Vector3(1.8f, 1.4f, 1.8f), bloom2, "bloom");
    }

    void SpawnChunk()
    {
        float z0 = nextChunkZ;
        nextChunkZ += ChunkLen;
        var root = new GameObject("Chunk").transform;
        root.SetParent(worldRoot, false);
        root.position = new Vector3(0, 0, z0);
        chunks.Add(new Chunk { go = root.gameObject, endZ = z0 + ChunkLen });

        float roadW = LW * 3f + 1.2f;
        var C = PrimitiveType.Cube;
        bool useMap = map != null;
        float edge = 6.5f;
        Gfx.Prim(C, root, new Vector3(0, useMap ? -0.56f : -0.5f, ChunkLen / 2f), new Vector3(roadW, 1f, ChunkLen), mRoad, "road");
        if (useMap)
        {
            foreach (var pc in map.slabs[slabIdx % map.count])
            {
                var mg = new GameObject("map");
                mg.transform.SetParent(root, false);
                mg.AddComponent<MeshFilter>().sharedMesh = pc.mesh;
                var mrr = mg.AddComponent<MeshRenderer>();
                mrr.sharedMaterial = pc.mat;
                mrr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            }
            slabIdx++;
        }
        if (!useMap)
            for (int l = -1; l <= 1; l++)
                Gfx.Prim(C, root, new Vector3(l * LW, 0.012f, ChunkLen / 2f), new Vector3(LW - 0.3f, 0.02f, ChunkLen), Gfx.Mat(l == 0 ? new Color(0.5f, 0.42f, 0.4f) : new Color(0.44f, 0.37f, 0.37f), 0.2f), "laneFloor");
        for (int s = -1; s <= 1; s += 2)
        {
            Gfx.Prim(C, root, new Vector3(s * (roadW / 2f + 0.9f), -0.25f, ChunkLen / 2f), new Vector3(1.8f, 0.5f, ChunkLen), mWalk, "walk");
            Gfx.Prim(C, root, new Vector3(s * 1.3f, 0.12f, ChunkLen / 2f), new Vector3(0.07f, 0.02f, ChunkLen), mLane, "lane");
            Gfx.Prim(C, root, new Vector3(s * 4.3f, 0.02f, ChunkLen / 2f), new Vector3(0.12f, 0.03f, ChunkLen), mEdge, "edge");
        }
        for (int s = -1; s <= 1; s += 2)
            for (int pu = 0; pu < 2; pu++)
                if (Random.value < 0.6f)
                    Gfx.Prim(C, root, new Vector3(s * 5.4f + Random.Range(-0.3f, 0.3f), 0.02f, Random.Range(3f, ChunkLen - 3f)), new Vector3(Random.Range(1.0f, 1.5f), 0.02f, Random.Range(2.5f, 5f)), Random.value < 0.5f ? mPuddleA : mPuddleB, "puddle");
        if (!useMap)
        {
            for (int l = -1; l <= 1; l++)
                for (int o = -1; o <= 1; o += 2)
                    Gfx.Prim(C, root, new Vector3(l * LW + o * 0.55f, 0.07f, ChunkLen / 2f), new Vector3(0.1f, 0.1f, ChunkLen), mRail, "rail");
            for (int k = 0; k < 16; k++)
                Gfx.Prim(C, root, new Vector3(0, 0.02f, k * 2.5f + 1.25f), new Vector3(roadW - 1.2f, 0.04f, 0.4f), mSleeper, "sleeper");
        }

        float[] hs = { 16f, 22f, 28f, 36f, 46f };
        float[] bws = { 8f, 10f, 12f };
        var lanternM = Gfx.Mat(new Color(1f, 0.35f, 0.15f), 2.8f);
        for (int s = -1; s <= 1; s += 2)
        {
            for (int i = 0; i < 4; i++)
            {
                bool house = Random.value < 0.6f;
                float bx = house ? Random.Range(7f, 10f) : bws[Random.Range(0, bws.Length)];
                float h = house ? (Random.value < 0.5f ? 9f : 13f) : hs[Random.Range(0, hs.Length)];
                int ti = Random.Range(0, 3);
                float cz = i * (ChunkLen / 4f) + ChunkLen / 8f;
                float bz = ChunkLen / 4f - 0.4f;
                bool envUsed = TryEnvBuilding(root, s, cz);
                if (!envUsed)
                {
                    Material bm = house ? Gfx.BuildingTint(ti, h, Random.Range(0, 5)) : Gfx.BuildingMat(ti, h);
                    Gfx.Prim(C, root, new Vector3(s * (edge + bx / 2f), h / 2f, cz), new Vector3(bx, h, bz), bm, "building");
                    if (house) AddRoof(root, s, edge, bx, h, cz, bz);
                    // tall tower behind the houses -> layered night skyline
                    if (Random.value < 0.7f)
                        Gfx.Prim(C, root, new Vector3(s * (edge + bx + 5f), 20f, cz), new Vector3(10f, 40f, bz), Gfx.BuildingMat(Random.Range(0, 3), 40f), "tower");
                    if (Random.value < 0.7f)
                        for (int k = -1; k <= 1; k += 2)
                            Gfx.Prim(PrimitiveType.Sphere, root, new Vector3(s * (edge - 0.3f), 3.2f + (k + 1) * 0.2f, cz + k * 1.6f), new Vector3(0.45f, 0.6f, 0.45f), lanternM, "lantern");
                }
                if (envUsed) continue;
                if (Random.value < 0.75f)
                {
                    var nm = Gfx.Mat(neon[Random.Range(0, neon.Length)], 2.4f);
                    float sh = Random.Range(3f, 7f);
                    Gfx.Prim(C, root, new Vector3(s * (edge - 0.2f), Random.Range(5f, Mathf.Max(6f, Mathf.Min(h - 2f, 16f))), cz + Random.Range(-3f, 3f)), new Vector3(0.4f, sh, 1.2f), nm, "sign");
                }
                if (!house && Random.value < 0.3f)
                    Gfx.Prim(C, root, new Vector3(s * (edge + bx / 2f), h + 0.3f, cz), new Vector3(0.5f, 0.5f, 0.5f), mRed, "beacon");
            }
            if (Random.value < 0.55f) AddCherryTree(root, s, ChunkLen * 0.5f);
            foreach (float zl in new float[] { 10f, 30f })
            {
                Gfx.Prim(C, root, new Vector3(s * 5.9f, 2.5f, zl), new Vector3(0.12f, 5f, 0.12f), mDark, "pole");
                Gfx.Prim(C, root, new Vector3(s * 5.3f, 5f, zl), new Vector3(1.3f, 0.12f, 0.12f), mDark, "arm");
                Gfx.Prim(C, root, new Vector3(s * 4.7f, 4.9f, zl), new Vector3(0.6f, 0.12f, 0.4f), mLamp, "bulb");
            }
        }

        if (Random.value < 0.35f)
        {
            float zg = Random.Range(8f, 32f);
            Gfx.Prim(C, root, new Vector3(-5.6f, 5f, zg), new Vector3(0.6f, 10f, 0.6f), mTorii, "pillar");
            Gfx.Prim(C, root, new Vector3(5.6f, 5f, zg), new Vector3(0.6f, 10f, 0.6f), mTorii, "pillar");
            Gfx.Prim(C, root, new Vector3(0, 10.2f, zg), new Vector3(13.6f, 0.7f, 0.9f), mTorii, "beam");
            Gfx.Prim(C, root, new Vector3(0, 8.6f, zg), new Vector3(11.8f, 0.4f, 0.6f), mTorii, "beam2");
            Gfx.Prim(C, root, new Vector3(0, 10.7f, zg), new Vector3(14.6f, 0.25f, 1.3f), mDark, "roof");
        }

        for (int i = 0; i < 4; i++) SpawnRow(z0 + 5f + 10f * i, root);
    }

    // Uses your own models from the TokyoAssets folder as roadside buildings/props (if present).
    bool TryEnvBuilding(Transform root, int side, float cz)
    {
        if (env == null || env.Count == 0) return false;
        var g = Instantiate(env[Random.Range(0, env.Count)], root);
        g.transform.localScale = Vector3.one;
        g.transform.position = new Vector3(0, 0, root.position.z + cz);
        g.transform.rotation = Quaternion.Euler(0, side < 0 ? 90f : -90f, 0);
        var rs = g.GetComponentsInChildren<Renderer>();
        if (rs.Length == 0) { Destroy(g); return false; }
        Bounds b = rs[0].bounds;
        for (int i = 1; i < rs.Length; i++) b.Encapsulate(rs[i].bounds);
        float sc = Mathf.Clamp(Mathf.Min(10f / Mathf.Max(b.size.z, 0.01f), 12f / Mathf.Max(b.size.x, 0.01f)), 0.05f, 3f);
        g.transform.localScale = Vector3.one * sc;
        b = rs[0].bounds;
        for (int i = 1; i < rs.Length; i++) b.Encapsulate(rs[i].bounds);
        float wantX = side * (6.5f + b.size.x / 2f);
        g.transform.position += new Vector3(wantX - b.center.x, -b.min.y, root.position.z + cz - b.center.z);
        return true;
    }

    // ------------------------------------------------------------------ patterns
    Item NewItem(Kind k, Transform parent, float x, float y, float z, float halfZ, float bottom, float top, string name)
    {
        var g = new GameObject(name);
        g.transform.SetParent(parent, false);
        g.transform.position = new Vector3(x, y, z);
        var it = g.AddComponent<Item>();
        it.kind = k; it.halfZ = halfZ; it.bottom = bottom; it.top = top; it.baseY = y;
        items.Add(it);
        return it;
    }

    void Coin(Transform parent, float x, float y, float z)
    {
        var it = NewItem(Kind.Coin, parent, x, y, z, 0.5f, 0, 0, "coin");
        var spin = new GameObject("spin").transform;
        spin.SetParent(it.transform, false);
        it.spin = spin;
        var c = Gfx.Prim(PrimitiveType.Cylinder, spin, Vector3.zero, new Vector3(0.75f, 0.06f, 0.75f), mCoin, "disc");
        c.transform.localRotation = Quaternion.Euler(90f, 0, 0);
    }

    void CoinLine(Transform parent, int lane, float z)
    {
        for (int i = 0; i < 5; i++) Coin(parent, lane * LW, 1f, z - 4f + i * 2f);
    }

    void ArcCoins(Transform parent, float x, float z, float peak)
    {
        float[] a = { 0f, 0.7f, 1f, 0.7f, 0f };
        for (int i = 0; i < 5; i++) Coin(parent, x, 1f + peak * a[i], z - 4f + i * 2f);
    }

    void SpawnRow(float z, Transform parent)
    {
        if (z < 28f) return;
        if (z < 75f && rowCooldown <= 0) { ObstacleRow(parent, z, 0f, true); rowCooldown = 1; return; }   // trains right from the start
        if (rowCooldown > 0)
        {
            rowCooldown--;
            if (Random.value < 0.6f) CoinLine(parent, Random.Range(-1, 2), z);
            return;
        }
        float diff = Mathf.Clamp01(z / 3000f);
        float r = Random.value;
        if (r < 0.5f + 0.15f * diff) { ObstacleRow(parent, z, diff, false); rowCooldown = 1; }
        else if (r < 0.80f) CoinLine(parent, Random.Range(-1, 2), z);
        else if (r < 0.86f) MakePower(RandomPower(), parent, Random.Range(-1, 2) * LW, z);
        else if (r < 0.90f) MakePower(Kind.Box, parent, Random.Range(-1, 2) * LW, z);
    }

    void ObstacleRow(Transform parent, float z, float diff, bool forceTrain)
    {
        int[] t = new int[3]; // 0 none, 1 train, 2 barrier, 3 overhead, 4 cargo
        float tr = Random.value;
        int trains = forceTrain ? 1 : (tr < 0.5f ? 1 : (tr < 0.72f && diff > 0.05f ? 2 : 0));
        int[] order = { 0, 1, 2 };
        for (int i = 2; i > 0; i--)
        {
            int j = Random.Range(0, i + 1);
            int tmp = order[i]; order[i] = order[j]; order[j] = tmp;
        }
        for (int k = 0; k < 3; k++)
        {
            int lane = order[k];
            if (k < trains) t[lane] = 1;
            else
            {
                float q = Random.value;
                t[lane] = q < 0.4f ? 2 : q < 0.6f ? 3 : q < 0.75f ? 4 : 0;
            }
        }
        for (int l = 0; l < 3; l++)
        {
            float x = (l - 1) * LW;
            switch (t[l])
            {
                case 1:
                    {
                        var trainItem = MakeTrain(parent, x, z);
                        float kind = Random.value;
                        bool ramp = enableRamps && (forceTrain || kind < 0.3f);                    // ramp: run up onto the roof
                        bool moving = !ramp && z > 150f && kind < 0.6f;           // oncoming train
                        if (ramp)
                        {
                            MakeRamp(parent, x, z);
                            for (int i = 0; i < 5; i++) Coin(parent, x, 4.7f, z - 3.5f + i * 1.8f);
                        }
                        else if (moving) trainItem.vz = -Random.Range(7f, 11f);
                        else if (Random.value < 0.4f) for (int i = 0; i < 5; i++) Coin(parent, x, 4.7f, z - 4f + i * 2f);
                    }
                    break;
                case 2: MakeBarrier(parent, x, z); ArcCoins(parent, x, z, 1.3f); break;
                case 3:
                    MakeOverhead(parent, x, z);
                    for (int i = 0; i < 3; i++) Coin(parent, x, 0.7f, z - 2f + i * 2f);
                    break;
                case 4: MakeCargo(parent, x, z); ArcCoins(parent, x, z, 1.8f); break;
                default: if (Random.value < 0.7f) CoinLine(parent, l - 1, z); break;
            }
        }
    }

    Item MakeTrain(Transform parent, float x, float z)
    {
        var it = NewItem(Kind.Train, parent, x, 0, z, 4.8f, 0f, 4.0f, "Train");
        it.halfX = 1.0f;
        Color body, band, roofC;
        switch (Random.Range(0, 4))
        {
            case 0: body = new Color(1f, 0.45f, 0.1f); band = new Color(0.75f, 0.9f, 0.2f); roofC = new Color(1f, 0.95f, 0.65f); break;   // orange / lime metro
            case 1: body = new Color(0.8f, 0.82f, 0.88f); band = new Color(0.9f, 0.1f, 0.15f); roofC = new Color(0.92f, 0.94f, 1f); break; // grey / red subway
            case 2: body = new Color(0.2f, 0.45f, 0.9f); band = new Color(0.95f, 0.8f, 0.2f); roofC = new Color(0.8f, 0.9f, 1f); break;  // blue / yellow
            default: body = new Color(0.97f, 0.82f, 0.15f); band = new Color(0.85f, 0.2f, 0.15f); roofC = new Color(1f, 0.95f, 0.7f); break; // yellow / red
        }
        var mb = Gfx.Mat(body, 0.45f);
        var mband = Gfx.Mat(band, 0.45f);
        var mroof = Gfx.Mat(roofC, 0.8f);   // bright roof: easy to see from above
        var glass = Gfx.Mat(new Color(0.65f, 0.9f, 1f), 1.8f);
        var chassis = Gfx.Mat(new Color(0.2f, 0.28f, 0.4f));
        var wheel = Gfx.Mat(new Color(0.08f, 0.08f, 0.1f));
        var t = it.transform;
        var C = PrimitiveType.Cube;

        Gfx.Prim(C, t, new Vector3(0, 0.45f, 0), new Vector3(1.8f, 0.25f, 9.2f), chassis, "chassis");
        float[] wz = { -3.4f, -2.3f, 2.3f, 3.4f };
        for (int sx = -1; sx <= 1; sx += 2)
            foreach (float w in wz)
            {
                var wh = Gfx.Prim(PrimitiveType.Cylinder, t, new Vector3(sx * 0.95f, 0.4f, w), new Vector3(0.7f, 0.11f, 0.7f), wheel, "wheel");
                wh.transform.localRotation = Quaternion.Euler(0, 0, 90f);
            }
        Gfx.Prim(C, t, new Vector3(0, 1.15f, 0), new Vector3(2.1f, 1.0f, 9.6f), mband, "lower");
        Gfx.Prim(C, t, new Vector3(0, 2.45f, 0), new Vector3(2.1f, 1.6f, 9.6f), mb, "upper");
        for (int sx = -1; sx <= 1; sx += 2)
        {
            var ch = Gfx.Prim(C, t, new Vector3(sx * 0.82f, 3.3f, 0), new Vector3(0.6f, 0.6f, 9.6f), mb, "round");
            ch.transform.localRotation = Quaternion.Euler(0, 0, 45f);
            for (int k = 0; k < 5; k++)
                Gfx.Prim(C, t, new Vector3(sx * 1.06f, 2.55f, -3.6f + k * 1.8f), new Vector3(0.06f, 0.8f, 1.2f), glass, "window");
            Gfx.Prim(C, t, new Vector3(sx * 1.07f, 1.95f, 0f), new Vector3(0.05f, 1.7f, 1.0f), mDark, "door");
        }
        Gfx.Prim(C, t, new Vector3(0, 3.62f, 0), new Vector3(1.5f, 0.25f, 9.4f), mroof, "roof");
        Gfx.Prim(C, t, new Vector3(0, 3.77f, 0), new Vector3(0.45f, 0.05f, 9.2f), mband, "roofStripe");
        foreach (float vz in new float[] { -3f, 0f, 3f })
            Gfx.Prim(C, t, new Vector3(0, 3.8f, vz), new Vector3(0.9f, 0.14f, 0.7f), mWhite, "roofVent");

        // front (the side you run towards)
        Gfx.Prim(C, t, new Vector3(0, 2.0f, -4.83f), new Vector3(2.0f, 2.8f, 0.08f), mb, "face");
        Gfx.Prim(C, t, new Vector3(0, 2.75f, -4.88f), new Vector3(1.6f, 0.95f, 0.06f), glass, "windshield");
        Gfx.Prim(C, t, new Vector3(0, 3.5f, -4.88f), new Vector3(1.0f, 0.26f, 0.06f), mYellow, "destSign");
        Gfx.Prim(C, t, new Vector3(0, 1.0f, -4.88f), new Vector3(2.1f, 0.35f, 0.08f), mband, "bumper");
        Gfx.Prim(C, t, new Vector3(-0.7f, 1.55f, -4.9f), new Vector3(0.38f, 0.38f, 0.06f), mHead, "light");
        Gfx.Prim(C, t, new Vector3(0.7f, 1.55f, -4.9f), new Vector3(0.38f, 0.38f, 0.06f), mHead, "light");
        return it;
    }

    // Bright orange ramp with white arrows leading up to a train roof (the player's height follows its slope, see CheckItems)
    void MakeRamp(Transform parent, float x, float z)
    {
        var it = NewItem(Kind.Ramp, parent, x, 0, z - 7.8f, 3.0f, 0f, 4.0f, "Ramp");
        it.halfX = 1.1f;
        float len = Mathf.Sqrt(6f * 6f + 4f * 4f);
        float ang = Mathf.Atan2(4f, 6f) * Mathf.Rad2Deg;
        Quaternion tilt = Quaternion.Euler(-ang, 0, 0);
        var plank = Gfx.Prim(PrimitiveType.Cube, it.transform, new Vector3(0, 2f, 0), new Vector3(2.0f, 0.3f, len), Gfx.Mat(new Color(1f, 0.55f, 0.1f), 1.3f), "plank");
        plank.transform.localRotation = tilt;
        var edgeM = Gfx.Mat(new Color(0.3f, 1f, 1f), 2.5f);
        for (int s = -1; s <= 1; s += 2)
        {
            var e = Gfx.Prim(PrimitiveType.Cube, it.transform, new Vector3(s * 0.95f, 2.1f, 0), new Vector3(0.1f, 0.16f, len), edgeM, "edge");
            e.transform.localRotation = tilt;
        }
        // white arrows along the slope so it is obvious you can run up it
        var arrowM = Gfx.Mat(new Color(1f, 1f, 1f), 2.2f);
        for (int k = 0; k < 5; k++)
        {
            float tt = (k + 0.5f) / 5f;
            var ar = Gfx.Prim(PrimitiveType.Cube, it.transform, new Vector3(0, 2f + (tt - 0.5f) * 4f + 0.2f, (tt - 0.5f) * 6f), new Vector3(1.5f, 0.06f, 0.22f), arrowM, "arrow");
            ar.transform.localRotation = tilt;
        }
    }

    void MakeBarrier(Transform parent, float x, float z)
    {
        var it = NewItem(Kind.Barrier, parent, x, 0, z, 0.4f, 0f, 1.0f, "Barrier");
        var t = it.transform;
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(-0.95f, 0.5f, 0), new Vector3(0.14f, 1f, 0.14f), mMetal, "post");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0.95f, 0.5f, 0), new Vector3(0.14f, 1f, 0.14f), mMetal, "post");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0, 0.85f, 0), new Vector3(2.1f, 0.22f, 0.1f), mOrange, "bar");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0, 0.5f, 0), new Vector3(2.1f, 0.22f, 0.1f), mWhite, "bar");
    }

    void MakeOverhead(Transform parent, float x, float z)
    {
        var it = NewItem(Kind.Overhead, parent, x, 0, z, 0.4f, 1.3f, 2.2f, "Overhead");
        var t = it.transform;
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(-1.0f, 1.1f, 0), new Vector3(0.16f, 2.2f, 0.16f), mMetal, "post");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(1.0f, 1.1f, 0), new Vector3(0.16f, 2.2f, 0.16f), mMetal, "post");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0, 1.75f, 0), new Vector3(2.3f, 0.9f, 0.35f), mDark, "beam");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(-0.6f, 1.75f, 0), new Vector3(0.3f, 0.9f, 0.37f), mYellow, "stripe");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0.6f, 1.75f, 0), new Vector3(0.3f, 0.9f, 0.37f), mYellow, "stripe");
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0, 1.25f, 0), new Vector3(0.3f, 0.08f, 0.3f), mRed, "warn");
    }

    void MakeCargo(Transform parent, float x, float z)
    {
        var it = NewItem(Kind.Cargo, parent, x, 0, z, 2.0f, 0f, 1.8f, "Cargo");
        var t = it.transform;
        Color[] cols = { new Color(0.6f, 0.25f, 0.15f), new Color(0.1f, 0.45f, 0.5f), new Color(0.7f, 0.55f, 0.1f) };
        var m = Gfx.Mat(cols[Random.Range(0, cols.Length)]);
        Gfx.Prim(PrimitiveType.Cube, t, new Vector3(0, 0.9f, 0), new Vector3(2.0f, 1.8f, 4.0f), m, "box");
        for (int i = 0; i < 5; i++)
            Gfx.Prim(PrimitiveType.Cube, t, new Vector3(-0.8f + i * 0.4f, 0.9f, -2.02f), new Vector3(0.08f, 1.7f, 0.06f), mDark, "rib");
    }

    void MakePower(Kind k, Transform parent, float x, float z)
    {
        var it = NewItem(k, parent, x, 1.3f, z, 0.8f, 0, 0, k.ToString());
        var spin = new GameObject("spin").transform;
        spin.SetParent(it.transform, false);
        it.spin = spin;
        var C = PrimitiveType.Cube;
        it.transform.localScale = Vector3.one * 1.35f;
        var glow = Gfx.Mat(PowerColor(k), 2.5f);
        Gfx.Prim(C, it.transform, new Vector3(0, 2.4f, 0), new Vector3(0.07f, 5f, 0.07f), glow, "beam");
        for (int o = 0; o < 3; o++)
        {
            float an = o * Mathf.PI * 2f / 3f;
            Gfx.Prim(C, spin, new Vector3(Mathf.Cos(an) * 0.8f, 0.1f * o, Mathf.Sin(an) * 0.8f), Vector3.one * 0.13f, glow, "orb");
        }
        var haloT = new GameObject("halo").transform;
        haloT.SetParent(it.transform, false);
        haloT.localPosition = new Vector3(0, 0, 0.35f);
        it.halo = haloT;
        var rayM = Gfx.Mat(PowerColor(k), 2.4f);
        for (int r = 0; r < 8; r++)
        {
            var ray = Gfx.Prim(C, haloT, Vector3.zero, new Vector3(0.07f, 2.1f, 0.03f), rayM, "ray");
            ray.transform.localRotation = Quaternion.Euler(0, 0, r * 22.5f);
        }
        Gfx.Prim(PrimitiveType.Sphere, haloT, Vector3.zero, Vector3.one * 1.5f, Gfx.Glass(PowerColor(k), 0.2f, 1.2f), "glow");
        switch (k)
        {
            case Kind.Magnet:
                Gfx.Prim(C, spin, new Vector3(-0.3f, 0, 0), new Vector3(0.22f, 0.7f, 0.22f), mRed, "l");
                Gfx.Prim(C, spin, new Vector3(0.3f, 0, 0), new Vector3(0.22f, 0.7f, 0.22f), mRed, "r");
                Gfx.Prim(C, spin, new Vector3(0, -0.4f, 0), new Vector3(0.82f, 0.22f, 0.22f), mRed, "b");
                Gfx.Prim(C, spin, new Vector3(-0.3f, 0.42f, 0), new Vector3(0.22f, 0.16f, 0.22f), mWhite, "tip");
                Gfx.Prim(C, spin, new Vector3(0.3f, 0.42f, 0), new Vector3(0.22f, 0.16f, 0.22f), mWhite, "tip");
                break;
            case Kind.Mult:
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.7f, 0.7f, 0.15f), mGold, "s1");
                var s2 = Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.7f, 0.7f, 0.15f), mGold, "s2");
                s2.transform.localRotation = Quaternion.Euler(0, 0, 45f);
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.28f, 0.28f, 0.2f), mOrange, "core");
                break;
            case Kind.Jetpack:
                for (int s = -1; s <= 1; s += 2)
                {
                    Gfx.Prim(PrimitiveType.Cylinder, spin, new Vector3(s * 0.22f, 0, 0), new Vector3(0.28f, 0.35f, 0.28f), mMetal, "tank");
                    Gfx.Prim(PrimitiveType.Cylinder, spin, new Vector3(s * 0.22f, -0.4f, 0), new Vector3(0.2f, 0.08f, 0.2f), mOrange, "nozzle");
                    Gfx.Prim(PrimitiveType.Sphere, spin, new Vector3(s * 0.22f, 0.36f, 0), Vector3.one * 0.26f, mRed, "cap");
                }
                break;
            case Kind.Speed:
                Gfx.Prim(C, spin, new Vector3(0, -0.2f, 0), new Vector3(0.5f, 0.12f, 1.0f), mWhite, "sole");
                Gfx.Prim(C, spin, new Vector3(0, 0f, -0.2f), new Vector3(0.45f, 0.35f, 0.45f), mRed, "upper");
                Gfx.Prim(C, spin, new Vector3(0, -0.1f, 0.25f), new Vector3(0.45f, 0.2f, 0.4f), mWhite, "toe");
                Gfx.Prim(C, spin, new Vector3(-0.26f, 0.1f, -0.2f), new Vector3(0.05f, 0.3f, 0.4f), mGlass, "wing");
                Gfx.Prim(C, spin, new Vector3(0.26f, 0.1f, -0.2f), new Vector3(0.05f, 0.3f, 0.4f), mGlass, "wing");
                break;
            case Kind.ScoreBoost:
                Gfx.Prim(PrimitiveType.Sphere, spin, Vector3.zero, Vector3.one * 0.75f, mBlue, "orb");
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.5f, 0.12f, 0.12f), mWhite, "plus");
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.12f, 0.5f, 0.12f), mWhite, "plus");
                break;
            case Kind.Hover:
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.5f, 0.1f, 1.2f), mPink, "board");
                Gfx.Prim(C, spin, new Vector3(0, 0, 0.6f), new Vector3(0.54f, 0.06f, 0.1f), mGlass, "edge");
                Gfx.Prim(C, spin, new Vector3(0, 0, -0.6f), new Vector3(0.54f, 0.06f, 0.1f), mGlass, "edge");
                break;
            case Kind.Box:
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.8f, 0.8f, 0.8f), mPurple, "box");
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.84f, 0.2f, 0.84f), mGold, "ribbon");
                Gfx.Prim(C, spin, Vector3.zero, new Vector3(0.2f, 0.84f, 0.84f), mGold, "ribbon");
                break;
        }
    }

    void OnApplicationPause(bool paused)
    {
        if (paused) { SaveMissions(); PlayerPrefs.Save(); if (state == State.Playing) DoPause(); }
    }
}
