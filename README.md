# ErgoDone-Setup

Originaly frome Rouji: https://github.com/Rouji/Ergodone-QMK
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

I'll change it for my own later
```
git clone https://github.com/Rouji/Ergodone-QMK.git keyboards/ergodone/keymaps/rj
make clean && make ergodone:rj
# hid_bootloader_cli -w -v -mmcu=atmega32u4 ergodone_rj.hex
```
