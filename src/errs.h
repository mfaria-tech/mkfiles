/**
 * TITLE: errs.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 21.02.2023
 *
 * DESCRIPTION:
**/

typedef struct
{
    int code;
    char *log;
    char *msg;
    char *logdate;
}
errs;

#define ERR_ARGS 1
#define ERR_GETOPT 2
#define ERR_OUT_FILE 3
//#define ERR_ 4
//#define ERR_ 5
//#define ERR_ 6

int get_err(const int code);
