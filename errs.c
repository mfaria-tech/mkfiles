/**
 * TITLE: errs.c
 * NAME: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 19.02.2023
 *
 * DESCRIPTION:
**/ 

#include "errs.h"
#include <stdio.h>

void set_log(errs *err, char *log, char *msg);
void save_log(errs *err);

int get_err (int code)
{
    errs err;
    
    switch (code) 
    {
        case 1:
            set_log(
                &err, 
                "",
                ""
            );
        case 2:
            set_log(
                &err,
                "",
                ""
            );
        default:
            err.code = code;
    }

    return err.code;
}

void set_log(errs *err, char *log, char *msg)
{
    err->log = log;
    err->msg = msg;
    //err->logdate = ;
}

void save_log(errs *err)
{
    FILE *logfile = fopen(FILENAME, "w");
    if (logfile == NULL)
    {
        printf("\e[0;30mCould not open %s.\e[0m\n", FILENAME);
        return;
    }


}

