//Modify this file to change what commands output to your statusbar, and recompile using the make command.
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
static const Block blocks[] = {
    { "vol: ",  "pamixer --get-volume-human",                     5,  1 },
    { "cpu: ",  "sensors | grep 'Package' | awk '{print $4}'",    10, 2 },
    { "upd: ",  "dnf check-update | wc -l",                     3600, 3 },
    { "wth: ",  "curl -s 'wttr.in/?format=1'",                  1800, 4 },
    { "dat: ",  "date '+%a %d %b %H:%M'",                         10, 5 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 7;
