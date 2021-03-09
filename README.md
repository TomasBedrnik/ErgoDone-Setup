# ErgoDone-Setup

Originaly frome Rouji: https://github.com/Rouji/Ergodone-QMK

To flash .hex file made by QMK Configurator web: https://config.qmk.fm/#/ergodone/LAYOUT_ergodox
you need only hid_bootloader_cli from TKG toolkit.

you can simply use thisone from Rouji: https://github.com/Rouji/Ergodone-Setup#initial-setup
```
# my own fork, solely for the reason of missing scripts for linux
git clone https://github.com/Rouji/tkg-toolkit.git
cd tkg-toolkit/linux
./setup.sh
```
Binary is here: ```tkg-toolkit/linux/bin/hid_bootloader_cli```
To flash hex file just run this with appropriate .hex file:
```
# hid_bootloader_cli -w -v -mmcu=atmega32u4 ergodone_default.hex
```
# Own changes in keymap.c
If you want to do some changes, you need whole toolkit
```
git clone https://github.com/qmk/qmk_firmware.git
cd qmk_firmware
```
This will run pacman on Arch so probaly other package managers on different systems...
```
# util/qmk_install.sh
```
Still not enough, need some python packages too:
```
python3 -m pip install -r ./requirements.txt
```
And other stuff
```
make git-submodule
```
Now you need to convert .json from QMK configurator to keymap.c:
```
./qmk json2c ergodone_tb_layout.json
```
You woul like to modify it - add led signalization for second layout
https://github.com/TomasBedrnik/ErgoDone-Setup/blob/main/keymap.c

Compile .hex and flash it

TODO: find direct commands from qmk -h
```
mkdir qmk_firmware/keyboards/ergodone/keymaps/tb/
cp keymap.c qmk_firmware/keyboards/ergodone/keymaps/tb/
make clean && make ergodone:tb
# hid_bootloader_cli -w -v -mmcu=atmega32u4 ergodone_tb.hex
```
