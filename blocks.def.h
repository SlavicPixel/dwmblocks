//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/

	
	{"  ", "/opt/dwmblocks-distrotube/scripts/cpu_freq",  1,		          0},
	
	{"  ", "/opt/dwmblocks-distrotube/scripts/cpu_temp",  1,		         0},
	
	{"  ", "/opt/dwmblocks-distrotube/scripts/gpu",  1,		         0},
	
	{"  ", "/opt/dwmblocks-distrotube/scripts/memory",	 2,		              1},
	
	{"  ", "/opt/dwmblocks-distrotube/scripts/net",	 2,		              1},

	{"  ", "/opt/dwmblocks-distrotube/scripts/volume",     0,		              10},

	{"  ", "/opt/dwmblocks-distrotube/scripts/clock",	     1,	              0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
