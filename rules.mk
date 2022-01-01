SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
DYNAMIC_MACRO_ENABLE = no
COMBO_ENABLE = yes
MOUSEKEY_ENABLE = yes
WPM_ENABLE = yes
SPLIT_KEYBOARD = yes

SRC += features/casemodes.c
SRC += features/leader.c
SRC += features/encoder.c

# Save firmware space
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
RGBLIGHT_ENABLE = no
LTO_ENABLE = yes
