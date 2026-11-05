NEON RUNNER - TOKYO NIGHT  (Unity endless runner)
=================================================
Setup (2 minutes)
1. Unity Hub > New project > "3D" template (Built-in or URP, Unity 2021.3 or newer).
2. Close Unity, copy this ZIP's "Assets" folder into your project (merge/replace).
3. Open Unity, open any scene (SampleScene), press PLAY.
   Everything (city, character, UI, music) is created from code - nothing to drag in.

Controls
  Keyboard: LEFT/RIGHT (A/D) move lane, UP/W/SPACE jump, DOWN/S roll, ESC/P pause
  Mobile/mouse: swipe left/right/up/down

Features (from your design slide)
  - Endless 3D running, 3 lanes, Tokyo Night city with neon signs, torii gates, lit windows
  - Jump & Roll, trains / barriers / overhead gantries / cargo containers
  - Coins, Mystery Boxes, Inspector + Dog chase after the first hit
  - Power-ups: Magnet, 2X Score, Jetpack, Speed Boost, Score Boost, Hoverboard
  - HUD (coins, score, boxes, pause), Game Over screen (Revive / Home / Retry)
  - Best score + coins saved (PlayerPrefs), procedural sound + music

Build for Android/iOS: File > Build Settings. If objects look pink/flat in a build,
add "Standard" (or "Universal Render Pipeline/Lit") under
Project Settings > Graphics > Always Included Shaders.

Tweak: speeds/lanes in Runner.cs & GameManager.cs, colors in MakeMaterials().

USING YOUR OWN MODELS (read straight from your .glb files - no importer package needed)
  Put these anywhere inside Assets (e.g. Assets/Models/):
    Jack.glb             -> the runner character (cut into body/arms/legs and animated)
    subway_surfers.glb   -> the map (tree-lined railway, repeated endlessly, scaled to fit the 3 lanes)
  If a file is missing, the game falls back to its built-in character / city.
  For phone/PC builds copy the .glb files to Assets/StreamingAssets/.
  Optional: prefabs in Assets/TokyoAssets are used as extra roadside buildings.
  Credits (CC-BY-4.0): "Jake 3D Modeling Subway Surfers" - Javier Contreras (sketchfab.com/Javier.ConRod)
                       "Subway Surfers" map - Capy Studio's (sketchfab.com/Capy_Studios)

v3 changes: map keeps only the TRACK (Tokyo buildings on both sides), bright neon trains, roll/jump squash-stretch
animation, dust + sparkle + speed-line effects, magnet/2X/boost/hover auras, power-up light beams, smooth lane changes,
jump buffering and power-up timer bars. Jack.cs: set TurnAround to false if he faces the camera.
v4: Subway-style rounded trains (orange/lime, grey/red, blue/yellow, yellow/red), Tokyo houses with pitched roofs,
lanterns, cherry trees, layered night skyline, animated title screen (waving Jack, torii gate, falling petals).
v5: Tokyo-style title screen (logo, banner, moon, stars, cables, torii, cherry trees, petals), 6 outfit styles
(use < > buttons or LEFT/RIGHT keys on the title screen), HOW TO PLAY manual with controls + power-up legend,
first-run on-screen hints (lane / jump / roll).
v6: title renamed SUBWAY SURFERS, clean title layout (dark bands, no overlap, works in any window size).
v7: fades, slow-mo crash, camera tilt, coin counter punch.

v8: bloom glow (URP post-processing, created automatically), real music (put subway-surfers.mp3 anywhere in Assets;
for builds copy it to Assets/Resources/), better synthesized sound effects, rain + wet puddles (R toggles rain, M mutes music),
ramps up onto train roofs, oncoming trains, daily missions (MISSIONS button), shop (SHOP button) with 6 character styles + 4 hoverboards.
v9: mp3 included at Assets/Resources/subway-surfers.mp3 (copy the whole Assets folder, not only Scripts).
v10: your sound effects (Assets/Resources/Sfx): coin, jump, roll, dodge (lane change), powerUp, mystery box, mission reward,
unlock (shop), title letters, magnet loop (plays while the magnet is active). Crash sound is still generated.
v11: power-up shield bubble (colour of active power-up, blinks before it ends), glow light on the scene, sunburst rays + glow around pickups.
v12: map trimmed to rails+sleepers only (old map trains removed).
