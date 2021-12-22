OLED_ENABLE = yes
OLED_DRIVER_ENABLE= yes
ENCODER_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes

SRC += features/casemodes.c
SRC += features/leader.c

# Save firmware space
MOUSEKEY_ENABLE = no
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
RGBLIGHT_ENABLE = no
