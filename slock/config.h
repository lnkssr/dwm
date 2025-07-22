/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "#282828",   /* темный фон (dark background) */
    [INPUT] =  "#458588",   /* синий-зеленый (bluish teal) */
    [FAILED] = "#FB4934",   /* красный (bright red) */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
