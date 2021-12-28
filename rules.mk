SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
OLED_DRIVER_ENABLE= yes
ENCODER_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
MOUSEKEY_ENABLE = yes
WPM_ENABLE = yes

SRC += features/casemodes.c
SRC += features/leader.c
SRC += features/encoder.c

# Save firmware space
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
RGBLIGHT_ENABLE = no
