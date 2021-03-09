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
You also need hid_bootloader_cli from TKG toolkit - you can simply use thisone from Rouji: https://github.com/Rouji/Ergodone-Setup#initial-setup
```
# my own fork, solely for the reason of missing scripts for linux
git clone https://github.com/Rouji/tkg-toolkit.git
cd tkg-toolkit/linux
./setup.sh
```
And copy the to qmk_firmware folder from ```tkg-toolkit/linux/bin/hid_bootloader_cli```


I'll change it for my own keymap later
```
git clone https://github.com/Rouji/Ergodone-QMK.git keyboards/ergodone/keymaps/rj
make clean && make ergodone:rj
# hid_bootloader_cli -w -v -mmcu=atmega32u4 ergodone_rj.hex
```
