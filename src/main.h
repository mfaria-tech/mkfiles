/**
 * TITLE: mkfiles.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 20.02.2023
 * UPDATED AT: 21.02.2023
 *
 * DESCRIPTION:
**/

#ifndef MKFILES_H
#define MKFILES_H

#include <getopt.h>
#include <stdlib.h>

#include "errs.h"

#define OPTS "hix:"

const struct option opts_long[] = {
    {"help", no_argument, 0, 'h'},
    {"interative", no_argument, 0, 'i'},
    {"set-extension", required_argument, 0, 'x'},
    {0, 0, 0, 0}
};

void show_help(void);

#endif // MKFILES_H
