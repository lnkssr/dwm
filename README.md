# Gruvbox themed dwm

![Screenshot](./screenshot.png)

This is my dwm configuration files. Here you'll find:
- dwm
- dwmblocks
- alacritty
- fish
- starship

## Installation
```bash
git clone https://github.com/lnkssr/dwm
cd dwm/dwm
make && sudo make install
cd ../dwmblocks
# Change your location in blocks.h for the weather widget
make && sudo make install
cd ..
# This will overwrite your previous configuration
cp -r .config/ ~/
sudo cp startdwm.sh /usr/local/bin/
```

If you use a display manager
```bash
sudo cp dwm.desktop /usr/local/share/xsessions/
```
If you don't
```bash
echo "exec /usr/local/bin/startdwm.sh" >> ~/.xinitrc
```

