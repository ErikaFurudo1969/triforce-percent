# Triforce%

Triforce% is a hybrid RTA/TAS "speedrun" of Ocarina of Time which uses Arbitrary
Code Execution (ACE) to install a set of data loaders in system memory, enabling
arbitrary assets (scenes, objects, music, etc.) in the game ROM to be seamlessly
live-patched from the host PC. By modifying the game programming and assets,
beta content cut from the final version of OoT is restored and brought to life
on screen. A new plot is constructed based on this beta content and on urban
legends from the late '90s, culminating in Link obtaining the Triforce.

But, in front of thousands of live viewers, once we have the power of the
Goddesses--and the power to make the game whatever we can imagine--what will we
use this power for?


# Setup

- Install Linux (Debian / Ubuntu / other Debian derivative), either directly or through WSL/WSL2 if you're on Windows.
- Make sure you got the Git submodules (ZAP2/ZAPD, novl, z64hdr). You will need libpng (`libpng-dev`, `libelf-dev`, and `libglib2.0-dev` for these to compile.
- If you don't already have it, install the N64 toolchain from https://github.com/glankk/n64.
- Get a copy of zzrtl which is stable enough to work on Linux with the default (i.e. non-Jared Johnson) scripts, e.g. 0.01r4. https://old.z64.me/tools/zzrtl/zzrtl-0.01-r4.zip Put this somewhere outside the Git repo (i.e. not in the `toolchain` folder).
- Copy local.mk.example to local.mk and edit the paths defined there to point to the relevant tools on your computer, i.e. zzrtl and python 3.
- Make a `build-shortcut` folder and paste the OoT 1.0U compressed ROM into it, with the name `oot_1.0U_comp.z64`.
- Make a `build-romhack` and paste the OoT 1.0U uncompressed ROM into it, with the name `oot_1.0U_uncomp.z64`.
- `make`


# Credits

### TRIFORCE% OOT ACE SHOWCASE

Director \
SAURAEN

RTA Speedrunner \
SAVESTATE

Scenario \
SAURAEN \
REBECCAETRIPP \
TERUSTHEBIRD \
DWANGOAC

### ASSET UNIT

Actor Design & Program \
SAURAEN \
RANKAISIJA \
Z64ME \
\/ZEL\/

Scene Design \
CDI-FAILS \
\/ZEL\/ \
SAURAEN

Music \
SAURAEN \
REBECCAETRIPP

Cinema Scenes \
SAURAEN \
\/ZEL\/

BotW Model Conversion \
ALI1234

Animation \
PURPULPANCAKES \
SAURAEN

Screen Text \
KIM-SUKLEY \
SAURAEN

Translator \
YUKLOJ

Zelda (English Voice) \
SAOIRSE

Link (Japanese Voice) \
ZERO

Motion Capture Actor \
TBD

Motion Capture Technician \
TBD

Cel Shading \
SAURAEN \
GLANK

Textures \
KIM-SUKLEY \
\/ZEL\/ \
CDI-FAILS \
SAURAEN

### PROGRAM UNIT

Host Frontend \
SAURAEN \
THEMAS3212

TAStm32 Firmware \
OWNASAURUS \
SAURAEN

SRM / ACE Setup \
MRCHEEZE \
SAVESTATE

Bootstrapper Chain \
SAURAEN

Hyperspeed Loader \
TERUSTHEBIRD \
SAURAEN

System Patches \
SAURAEN \
\/ZEL\/

Game / Actor Patches \
SAURAEN \
MNGOLDENEAGLE \
\/ZEL\/

Build Toolchain \
SAURAEN \
Z64ME

### SUPPORT UNIT

Technical Support \
\/ZEL\/ \
Z64ME \
MZXRULES \
THARO \
JACK WALKER

Video Editing \
MUSKET012 \
GRAVATOS \
SAVESTATE \
SAURAEN

Promotional Artwork \
KIM-SUKLEY

YouTube Partner Channels \
SWANKYBOX \
TBD

YouTube Reactors \
TBD

Special Thanks \
KAZE EMANUAR \
XDANIEL \
ARIANA ALMANDOZ

Executive Producer \
DWANGOAC

### PRESENTED AT

Summer Games Done Quick 2022

### 

Assets, Toolchain, and Performance \
Copyright (C) 2019-2022 \
The Triforce% Team

The Legend of ZELDA: Ocarina of Time \
Copyright (C) 1998 \
Nintendo
