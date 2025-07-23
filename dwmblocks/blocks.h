//Modify this file to change what commands output to your statusbar, and recompile using the make command.
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
static const Block blocks[] = {
    { " ",  "pamixer --get-volume-human",                     5,  1 },
    { " ",  "sensors | grep 'Package' | awk '{print $4}'",    10, 2 },
    { " ",  "date '+%a %d %b %H:%M'",                         10, 5 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 7;
