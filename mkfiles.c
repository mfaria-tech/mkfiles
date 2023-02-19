/**
 * TITLE: mkfiles.c
 * NAME: Marcus Faria
 * CREATED AT: 17.02.2023
 * UPDATED AT: 17.02.2023
 *
 * DESCRIPTION:
**/

#include <getopt.h>
#include <stdio.h>

int main (int argc,char *argv[])
{
    char *opts = "i";
    
    char opt = getopt(argc, argv, opts); 
    if (opt == '?')
    {
        return 1;
    }

    return 0;
}

