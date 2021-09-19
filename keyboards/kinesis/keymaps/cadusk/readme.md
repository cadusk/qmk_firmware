# TuesdayJohn's Kinesis Keymap

These layouts are derived from what I was using on my Kinesis Contoured
keyboards with Hasu's USB-USB TMK converters.  With the move to QMK via
Stapelberg replacement controller, I've cleaned up the layouts a bit while
adding more functions and layers.

There are minor changes in the base keywell layout of non-alpha keys (e.g.,
CapsLock is ESC/Ctl, arrow clusters on one side), while the thumb clusters
deviate more from the default layout.

Changes to the thumb clusters include:
* The navigations keys moved to function layers.
* The function of 2u keys have been reversed - I've always used space with my
  left thumb, and I find it more helpful to have quick and easy access to Space
  and Enter while using my mouse/trackball.
* Backspace have been duplicated on both clusters.  As with Space and
  Backspace, I find it helpful to have quick and easy access to Backspace while
  using my mouse/trackball.
* The 2u keys serve dual function as momentary layer switchers.

I've largely left the function keys untouched, with the intension of not using
them often.  They are neither easy to use nor reach due to their locations and
size, and Kinesis used not-so-great rubber dome switches for them (Advantage
model and earlier).  Kinesis have since replaced the keys with Cherry ML
switches on Advantage2, but did not resolve the issues of size or location.
Additionally, leaving the function keys unused here makes it easier for me to
adapt the keymaps to my other keyboards, most of which do not have physical
function keys.

I use QWERTY as my default layout. I've included Colemak here as well.

## Future plans

* Add status LEDs to the Stapelberg PCB (usually used for Caps Lock, Num Lock,
  and Scroll Lock) to use as layer indicators.
* Add a speaker now that QMK supports additional pins for audio use.
* Utilize the leftover spots on the key matrix, as well as unused pins on
  Teensy++ 2.0 to run macropad and/or foot pedals.


## Layers

### Function Keys on all layers
- 'Numpd' toggles the Numpad layer
- 'Adjst' is a momentary layer key to access the Adjust layer

```
,-----------------------------------------------------. ,----------------------------------------------------.
| ESC |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 | | F9 | F10 | F11 | F12 | PScr| SLck| Paus|Numpd|Adjst|
`-----------------------------------------------------' `----------------------------------------------------'
```

### Colemak
- Default layer
- Keys separated by "/" tap for first, hold for second

```
,------------------------------------------------. ,------------------------------------------------.
|    `   |   1   |   2   |   3   |   4   |   5   | |   6   |   7   |   8   |   9   |   0   |    -   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|   Tab  |   Q   |   W   |   F   |   P   |   G   | |   J   |   L   |   U   |   Y   |   ;   |    \   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|ESC/Ctrl|   A   |   R   |   S   |   T   |   D   | |   H   |   N   |   E   |   I   |   O   |    '   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|  Shift |   Z   |   X   |   C   |   V   |   B   | |   K   |   M   |   ,   |   .   |   /   |  Shift |
`--------+-------+-------+-------+-------+-------' `-------+-------+-------+-------+-------+--------'
         |   =   |  Ins  |  Left | Right |                 |   Up  |  Down |   [   |   ]   |
         `-------------------------------'                 `-------------------------------'
                               ,-----------------. ,-----------------.
                               |  LCtl  |  Alt   | |  RAlt  |  Del   |
                      ,--------+--------+--------| |--------+--------+--------.
                      |        |        |  Home  | |  PgUp  |        |        |
                      |  Bspc  |  LGUI  |--------| |--------|  Enter |  Space |
                      |        |        |  End   | |  PgDn  |        |        |
                      `--------------------------' `--------------------------'
                                            ^---- Fn --^
```

### QWERTY
- Keys separated by "/" tap for first, hold for second

```
,------------------------------------------------. ,------------------------------------------------.
|    `   |   1   |   2   |   3   |   4   |   5   | |   6   |   7   |   8   |   9   |   0   |    -   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|   Tab  |   Q   |   W   |   E   |   R   |   T   | |   Y   |   U   |   I   |   O   |   P   |    \   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|ESC/Ctrl|   A   |   S   |   D   |   F   |   G   | |   H   |   J   |   K   |   L   |   ;   |    '   |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|  Shift |   Z   |   X   |   C   |   V   |   B   | |   N   |   M   |   ,   |   .   |   /   |  Shift |
`--------+-------+-------+-------+-------+-------' `-------+-------+-------+-------+-------+--------'
         |   =   |  Ins  |  Left | Right |                 |   Up  |  Down |   [   |   ]   |
         `-------------------------------'                 `-------------------------------'
                               ,-----------------. ,-----------------.
                               |  LCtl  |  Alt   | |  RAlt  |  Del   |
                      ,--------+--------+--------| |--------+--------+--------.
                      |        |        |  Home  | |  PgUp  |        |        |
                      |  Bspc  |  LGUI  |--------| |--------|  Enter |  Space |
                      |        |        |  End   | |  PgDn  |        |        |
                      `--------------------------' `--------------------------'
                                            ^---- Fn --^
```

### Function layer
- Momentary layer

```
,------------------------------------------------. ,------------------------------------------------.
|   F12  |   F1  |   F2  |   F3  |   F4  |   F5  | |   F6  |   F7  |   F8  |   F9  |  F10  |   F11  |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |       |   Up  |       |       |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |  Left |  Down | Right |       |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |       |       |       |       |  App   |
`--------+-------+-------+-------+-------+-------' `-------+-------+-------+-------+-------+--------'
         |       |       |       |       |                 |  Vol- |  Mute |  Vol+ |       |
         `-------------------------------'                 `-------------------------------'
                                 ,---------------. ,---------------.
                                 |       |       | |       |       |
                         ,-------+-------+-------| |-------+-------+-------.
                         |       |       |       | |       |       |       |
                         |       |       |-------| |-------|       |       |
                         |       |       |       | |       |       |       |
                         `-----------------------' `-----------------------'
```

### Numpad layer
- Toggle layer
- Right side layout close to PC numpad layout

```
,------------------------------------------------. ,------------------------------------------------.
|        |       |       |       |       |       | |       | NumLk |  KP / |  KP * |  KP - |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |  KP 7 |  KP 8 |  KP 9 |  KP + |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |  KP 4 |  KP 5 |  KP 6 |   =   |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |  KP 1 |  KP 2 |  KP 3 | KP Ent|        |
`--------+-------+-------+-------+-------+-------' `-------+-------+-------+-------+-------+--------'
         |       |       |       |       |                 |  KP 0 |   ,   |  KP . | KP Ent|
         `-------------------------------'                 `-------------------------------'
                                 ,---------------. ,---------------.
                                 |       |       | |       |       |
                         ,-------+-------+-------| |-------+-------+-------.
                         |       |       |       | |       |       |       |
                         |       |       |-------| |-------|       |       |
                         |       |       |       | |       |       |       |
                         `-----------------------' `-----------------------'
```

### Adjust layer
- Momentary layer
- Press and hold Adjust key on the function row

```
,-----------------------------------------------------. ,----------------------------------------------------.
| RST |     |     |     |     |     |     |     |     | |    |     |     |     |     |     |     |     | EXIT|
`-----------------------------------------------------' `----------------------------------------------------'
,------------------------------------------------. ,------------------------------------------------.
|        |Colemak| QWERTY|       |       |       | |       |       |       |       |       |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |       |       |       |       |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |       |       |       |       |        |
|--------+-------+-------+-------+-------+-------| |-------+-------+-------+-------+-------+--------|
|        |       |       |       |       |       | |       |       |       |       |       |        |
`--------+-------+-------+-------+-------+-------' `-------+-------+-------+-------+-------+--------'
         |       |       |       |       |                 |       |       |       |       |
         `-------------------------------'                 `-------------------------------'
                                 ,---------------. ,---------------.
                                 |       |       | |       |       |
                         ,-------+-------+-------| |-------+-------+-------.
                         |       |       |       | |       |       |       |
                         |       |       |-------| |-------|       |       |
                         |       |       |       | |       |       |       |
                         `-----------------------' `-----------------------'
 ```
