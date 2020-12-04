/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;		   /* -c option; centers dmenu on screen */
static int min_width = 800;		   /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12",
	"JoyPixels:pixelsize=20:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ff79c6", "#282a36" },
	[SchemeSel] = { "#ffb86c", "#684a82" },
	[SchemeSelHighlight] = { "#ff79c6", "#282a36" },
	[SchemeNormHighlight] = { "#ffb86c", "#282a36" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; constols number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 12;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
