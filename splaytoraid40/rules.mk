# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# encoder
ENCODER_ENABLE = yes
EXTRAKEY_ENABLE = yes
DIP_SWITCH_ENABLE = yes

# ArrGeeBee
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = no      # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)
RGB_MATRIX_DRIVER = WS2812  # RGB matrix driver support
RGB_MATRIX_SUPPORTED = no

# SPACE SAVING
OLED_ENABLE = no
AUDIO_ENABLE = no
MUSIC_ENABLE = no
LTO_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
