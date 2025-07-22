#!/bin/sh

nm-applet &
flameshot &
udiskie --no-notify &
xrandr --rate 144
feh --bg-scale ~/wp.png
setxkbmap us,ru -option 'grp:caps_toggle'
dwmblocks &

while true; do
	# Log stderror to a file
	dwm 2>~/.dwm.log
	# No error logging
	#dwm >/dev/null 2>&1
done
