# stakav2

![stakav2](imgur.com image replace me!)

A compact 3x6_4 split keyboard

* Keyboard Maintainer: [uthol](https://github.com/uthol)
* Hardware Supported: StakaV2 PCBs, STM32F401
* Hardware Availability: [Blackpill STM32F4x1 ](https://www.aliexpress.com/item/1005001456186625.html)

Make example for this keyboard (after setting up your build environment):

    make stakav2:default

Flashing example for this keyboard:

    make stakav2:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the BOOT0 then NRST buttons
* **Keycode in layout**: Press the key mapped to `QK_Boot` 
