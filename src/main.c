/**
 * TITLE: mkfiles.c
 * AUTHOR: Marcus Faria
 * CREATED AT: 17.02.2023
 * UPDATED AT: 21.02.2023
**/

#include <stdio.h>

#include "errs.h"
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return get_err(ERR_ARGS);
    }

    int opt_index = 0;
    char opt = getopt_long(argc, argv, OPTS, opts_long, &opt_index); 
    switch (opt) {
        case 'h':
            show_help();
            break;
        
        case 'i':
            // -- TODO interative role
            break;
        
        case 'x':
            if (!argv[opt_index + 1]) return get_err(ERR_SET_EXT);
            // -- TODO role to create file
            break;

        case '?':
            return get_err(ERR_GETOPT);
        
        default:
            abort();
    }

    return 0;
}

void show_help(void)
{
    printf("\e[1;30m\
        Use ./mkfiles.exe [OPTION] [SOURCE]\n\
            -h, --help              List most commonly used commands.\n\
            -i, --interative        Create file interatively.\n\
            -x, --set-extension     Set structure to create file.\n\
        \e[0m\n");

    exit(0);
}
