// user and group to drop privileges to
static const char *user  = "mc";
static const char *group = "mc";

// color name
static const char *colorname[NUMCOLS] = {
    [INIT]   = "black",
    [INPUT]  = "#005577",
	[FAILED] = "#CC3333",
    [CAPS]   = "red",
};

// treat cleared input like wrong password (color)
static int failonclear = 1;

// default message
static const char * message = "Suckless: Software that sucks less.";

// text color
static const char * text_color = "#ffffff";

// text size (must be a valid size)
static const char * font_name = "sans-serif:pixelsize=24:antialias=true:autohint=true";

// xresources
ResourcePref resources[] = {
       { "user",        STRING,  &user              },
       { "group",       STRING,  &group             },
       { "init",        STRING,  &colorname[INIT]   },
       { "input",       STRING,  &colorname[INPUT]  },
       { "failed",      STRING,  &colorname[FAILED] },
       { "caps",        STRING,  &colorname[CAPS]   },
       { "failonclear", INTEGER, &failonclear       },
       { "message",     STRING,  &message           },
       { "text_color",  STRING,  &text_color        },
       { "font_name",   STRING,  &font_name         },
};
