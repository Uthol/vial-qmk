OLED_ENABLE = false

ifeq ($(OLED_ENABLE),yes)
WPM_ENABLE = yes
SRC  += helix.c
endif
ENCODER_MAP_ENABLE = yes
VIA_ENABLE = yes