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

int get_err(int code);
