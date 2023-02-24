/**
 * TITLE: errs.c
 * AUTHOR: Marcus Faria
 * CREATED AT: 19.02.2023
 * UPDATED AT: 21.02.2023
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
                "Argument not found",
                "Use ./mkfiles.exe [OPTION] [SOURCE]"
            );
            break;
        case 2:
            set_log(
                &err, 
                "getopt was returned -1",
                "Option not found. Use \"ie\" for flag"
            );
            break;
        case 3:
            set_log(
                &err,
                "",
                ""
            );
            break;
    }
    err.code = code;
    
    display_log(&err);
    save_log(&err);
    return err.code;
}

// set value log to pointer error
void set_log(errs *err, char *log, char *msg)
{
    err->log = log;
    err->msg = msg;
    err->logdate = get_localtime();
}

// display error log
void display_log(errs *err)
{
    printf("\e[1;30m%s\e[0m\n", err->msg);
}

// save log in file-logs
void save_log(errs *err)
{
    char *logs = read_file();

    FILE *logfile = fopen(FILENAME, "w");
    if (logfile == NULL)
    {
        printf("\e[0;30mCould not open %s.\e[0m\n", FILENAME);
        return;
    }

    fseek(logfile, 0, SEEK_SET);
    fprintf(logfile, "ERROR :: %i\n", err->code); 
    fprintf(logfile, "STATUS :: %s\n", err->log);
    fprintf(logfile, "DESCRIPTION :: %s\n", err->msg);
    fprintf(logfile, "LOG DATE :: %s\n", err->logdate);
    
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