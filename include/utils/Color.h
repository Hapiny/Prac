/* FOREGROUND */
/* SIMPLE TEXT COLORS */
#define RST   "\x1B[0m" //default color
#define BLK  "\x1B[30m"//black
#define RED  "\x1B[31m"//red
#define GRN  "\x1B[32m"//green
#define YEL  "\x1B[33m"//yellow
#define BLU  "\x1B[34m"//blue
#define MAG  "\x1B[35m"//magenta
#define CYN  "\x1B[36m"//cyan
#define WHT  "\x1B[37m"//white

#define FRED(x) RED x RST
#define FGRN(x) GRN x RST
#define FYEL(x) YEL x RST
#define FBLU(x) BLU x RST
#define FMAG(x) MAG x RST
#define FCYN(x) CYN x RST
#define FWHT(x) WHT x RST
/* TEXT STYLES*/
#define SBOLD   "\x1B[1m"
#define SITAL   "\x1B[3m"
#define BOLD(x) "\x1B[1m" x RST//bold
#define ITAL(x) "\x1B[3m" x RST//italics
#define UNDL(x) "\x1B[4m" x RST//underlined