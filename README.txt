🏮 Subway Surfers – Tokyo Night (Unity 3D)
A 3D endless runner made in Unity 6 and inspired by the Subway Surfers World Tour: Tokyo Night theme. Run down the neon Tokyo subway tracks, dodge trains and barriers, collect coins, use power-ups and get away from the Inspector and his Dog.

Subject: Mechanics for Game Design Name: Gunde Sandeep Hall Ticket No: 2303A52371 Batch: 07

🎮 Features
3-lane endless runner that speeds up the longer you run
Swipe and keyboard controls: change lanes, jump and roll
Climb onto train roofs using ramps, with lines of coins on top
Endless track built in pieces as you run, with random obstacles
Tokyo Night world: parked trains, cherry blossom trees, red torii gates, stone lanterns, neon signs, Mt Fuji, Tokyo Tower, the moon and falling sakura petals
6 power-ups: Coin Magnet, 2x Multiplier, Hoverboard, Jetpack, Super Sneakers, Score Boost
Character shop: buy runners with the coins you collect (your coins are saved between runs)
Inspector & Dog chase: they follow you and catch you when you crash
Music and sound effects for coins, jumping, rolling and crashing
Score, coin count and best score shown on screen
🕹️ Controls
Action	Keyboard	Mobile
Move left / right	← / → or A / D	Swipe left / right
Jump	↑ / W / Space	Swipe up
Roll	↓ / S	Swipe down
Browse characters	< > arrows	Tap arrows
Turn character around	F	–
Restart	R	Tap
⚡ Power-Ups
Power-Up	Effect
🧲 Coin Magnet	Pulls nearby coins to you
✖️2 Multiplier	Doubles your score
🛹 Hoverboard	Saves you from one crash
🚀 Jetpack	Flies you above the track
👟 Super Sneakers	Lets you jump higher
⭐ Score Boost	Adds +500 to your score
🛠️ Tech Stack
Engine: Unity 6 (6000.x) – Universal 3D (URP)
Language: C#
Models: .glb characters loaded at runtime
Platforms: Windows / Android
Main Scripts
Script	Job
PlayerController.cs	Lanes, jump, roll, swipe input, power-ups, running animation
GameManager.cs	Score, coins, character shop, game over screen
TrackSpawner.cs	Builds the endless track, obstacles, coins and Tokyo scenery
Characters.cs	Character list, prices and coin bank
CharModel.cs / Glb.cs	Loads characters and splits arms and legs for animation
Chaser.cs	Inspector and Dog chasing the player
PowerUp.cs / Coin.cs	Pick-ups
AudioManager.cs	Music and sound effects
CameraFollow.cs	Camera behind the runner
▶️ How to Run
Clone or download this repository.
Open Unity Hub → Add → Add project from disk and pick the project folder.
Open it with Unity 6.
Go to Edit → Project Settings → Player → Other Settings → Active Input Handling and set it to Both.
In the top menu, click Tokyo Night → Build Game Scene.
Press Play ▶️.
🚀 Future Scope
Real animations for the characters (from Mixamo)
More themes: Classic City, Winter Holiday, Miami Beach, Holi Festival
Daily missions and rewards
Leaderboards and online high scores
Android release on the Play Store
⚠️ Disclaimer
This is a student project made for learning. Subway Surfers and its characters, names and music belong to SYBO Games. This project is not official and is not for sale.
