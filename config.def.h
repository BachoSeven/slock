/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* Solarized */
// static const char *colorname[NUMCOLS] = {
	// [INIT] =   "#073642",     [> after initialization <]
	// [INPUT] =  "#2aa198",   [> during input <]
	// [FAILED] = "#dc322f",   [> wrong password <]
// };

/* Gruvbox low-contrast */
static const char *colorname[NUMCOLS] = {
	[INIT] =   "#32302f",     /* after initialization */
	[INPUT] =  "#689d6a",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
