/**
 * TITLE: errs.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 21.02.2023
**/

#ifndef ERRS_H
#define ERRS_H

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
#define ERR_SET_EXT 4
//#define ERR_ 5
//#define ERR_ 6

int get_err(const int code);

#endif // ERRS_H
