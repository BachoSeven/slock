/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* Solarized */
// static const char *colorname[NUMCOLS] = {
	// [INIT] =   "#073642",     [> after initialization <]
	// [INPUT] =  "#2aa198",   [> during input <]
	// [FAILED] = "#dc322f",   [> wrong password <]
// };

/* Gruvbox */
static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
