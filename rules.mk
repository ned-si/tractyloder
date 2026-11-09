# Tractyloder: handwired 4x5 Dactyl Manuform with a PMW3360 trackball, built as
# a keymap of upstream handwired/dactyl_manuform/4x5 (pin differences are in
# config.h). Standalone keymap: does not use the shared nedsi userspace, which
# QMK would otherwise pull in for a keymap named "nedsi".
USER_NAME := nedsi_none

# Elite-C controllers, not the upstream Pro Micro (caterina).
BOOTLOADER = atmel-dfu

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

ENCODER_ENABLE = yes
TAP_DANCE_ENABLE = yes
UNICODEMAP_ENABLE = yes
COMBO_ENABLE = yes
NKRO_ENABLE = yes
LTO_ENABLE = yes
MOUSEKEY_ENABLE = yes
WPM_ENABLE = no

# Combo and tap dance arrays must be visible to keymap introspection.
INTROSPECTION_KEYMAP_C += combos.c
