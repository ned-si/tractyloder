# tractyloder

My QMK keymap for a handwired 4x5 Dactyl Manuform with a PMW3360 trackball on
the right half, on Elite-C controllers.

It is cloned inside my
[qmk-userspace](https://github.com/ned-si/qmk-userspace) checkout, at
`keyboards/handwired/dactyl_manuform/4x5/keymaps/nedsi`. It is standalone: its
layers, tap dances, combos and accented letters all live here, and `rules.mk`
sets `USER_NAME := nedsi_none` so the shared `users/nedsi` code is not built in.

## Target

`handwired/dactyl_manuform/4x5` from upstream QMK, with the differences of this
build carried in the keymap:

- `config.h`: matrix pins, right half as master, PMW3360 chip select (B6) and
  CPI (800), encoder pins (F1, C7).
- `rules.mk`: `atmel-dfu` bootloader (Elite-C) instead of `caterina`, and QMK's
  own `pmw3360` pointing device driver.
- `keymap.h`: `LAYOUT_tractyloder`, the physical layout of this build. Upstream
  `LAYOUT` has an extra key per side and a different argument order.

The trackball modes (cursor with acceleration, arrow keys, scroll, volume and
brightness) are in `keymap.c`, in `pointing_device_task_user`.

## Build and flash

From a machine set up as described in the qmk-userspace README:

```sh
qmk compile -kb handwired/dactyl_manuform/4x5 -km nedsi
qmk flash   -kb handwired/dactyl_manuform/4x5 -km nedsi
```

Both halves take the same firmware; flash each one in turn. `qmk flash` waits
for the half in DFU mode, then writes it with `dfu-programmer`. To get into DFU
mode, press the Elite-C reset button, or use `QK_BOOT` on the Numbers layer
(hold the right thumb Numbers key, then press the key that is Alt+Space on Main).

The firmware is tight on the ATmega32U4: about 2.9 KB of flash is left.
