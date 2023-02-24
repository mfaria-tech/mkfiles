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
    if (argc < 2)
    {
        return get_err(ERR_ARGS);
    }

    char opt = getopt(argc, argv, OPTS); 
    if (opt == '?')
    {
        return get_err(ERR_GETOPT);
    }

    return 0;
}
