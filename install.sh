#!/bin/bash 

cd dwm
make && sudo make install
cd ../dwmblocks
# Change your location in blocks.h for the weather widget
make && sudo make install
cd ../slock
# change config in slock 
make && sudo make install
# This will overwrite your previous configuration
cp -r .config/ ~/
sudo cp startdwm.sh /usr/local/bin/
# write start file in xinitrc 
echo "exec /usr/local/bin/startdwm.sh" >> ~/.xinitrc
sudo cp dwm.desktop /usr/local/share/xsessions/
