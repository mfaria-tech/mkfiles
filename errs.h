/**
 * TITLE: errs.h
 * NAME: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 19.02.2023
 *
 * DESCRIPTION:
**/

#include <stdio.h>

#define FILENAME "logs_mkfiles"

typedef struct
{
    int code;
    char *log;
    char *msg;
    char *logdate;
}
errs;

int get_err(int code);

