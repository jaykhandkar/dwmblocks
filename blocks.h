//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define SCRIPTSDIR "/home/jay/.config/scripts/"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"",	SCRIPTSDIR "internet",	5,	0},
	{"🔉 ", SCRIPTSDIR "volume", 1, 0},
	{"🔋 ",	SCRIPTSDIR "battery",	30,	0},
	{"🕘 ", "date +\"%B %d %l:%M%p\"| sed \'s/  / /g\'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
