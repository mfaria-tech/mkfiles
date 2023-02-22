/**
 * TITLE: errs.c
 * NAME: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 19.02.2023
 *
 * DESCRIPTION:
**/ 

#include "errs_private.h"

// Get error and storage status
int get_err(int code)
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

// set value log to pointer error
void set_log(errs *err, char *log, char *msg)
{
    err->log = log;
    err->msg = msg;
    err->logdate = get_localtime();
}

void save_log(errs *err)
{
    char *logs = read_file();

    FILE *logfile = fopen(FILENAME, "w");
    if (logfile == NULL)
    {
        printf("\e[0;30mCould not open %s.\e[0m\n", FILENAME);
        return;
    }
    if (logs != NULL)
    {
        for (int i = 0; logs[i] != '\0'; i++)
        {
            fputc(logs[i], logfile);
        }
    }

    fclose(logfile);
}

// read file with exist
char *read_file(void)
{
    FILE *curfile = fopen(FILENAME, "r");
    if (curfile == NULL)
    {
        return NULL;
    }

    long int cletters = 1; // 1 == '\0'
    fseek(curfile, 0, SEEK_SET);
    while (fgetc(curfile) != EOF)
    {
        cletters++;
    }

    char *logs = malloc(cletters * sizeof(char));
    fseek(curfile, 0, SEEK_SET);
    for (int i = 0, ch;
         ( ch = fgetc(curfile) ) != EOF;
         i++)
    {
        logs[i] = ch;
    }
    logs[cletters - 1] = '\0';
    fclose(curfile);
    return logs;
}

// get current clock, return string time
char *get_localtime(void)
{
    struct tm* ptr;
    time_t t;
    
    t = time(NULL);
    ptr = localtime(&t);

    return asctime(ptr);
}
