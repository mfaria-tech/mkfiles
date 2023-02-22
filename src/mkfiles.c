/**
 * TITLE: mkfiles.c
 * AUTHOR: Marcus Faria
 * CREATED AT: 17.02.2023
 * UPDATED AT: 21.02.2023
 *
 * DESCRIPTION:
**/

#include <stdio.h>

#include "mkfiles.h"

int main (int argc,char *argv[])
{    
    char opt = getopt(argc, argv, OPTS); 
    if (opt == -1)
    {
        return 1;
    }

    return 0;
}
