/**
 * TITLE: config.c
 * AUTHOR: Marcus Faria
 * CREATED AT: 24.02.2023
 * UPDATED AT: 24.02.2023
**/

#include "config_private.h"

// create file config if not exit
int create_config(const char *file, const char *dir)
/**
 * Args:
 *  file (char *) == name file
 *  dir (char *) == name directory
 *
 * Return:
 *  0 == not created file
 *  1 == created file
**/
{
    struct stat buf;
    if (check_dir(dir) == 0 &&
        stat(file, &buf) != -1)
    {
        return 0;
    }

    set_config(file, dir);
    return 1;
}

int set_config(const char *file, const char*dir)
{ 
    return 0;
}

// check directory if exist
int check_dir(const char *dir)
/**
 * Args:
 *  dir (char *) == name directory
 *
 * Return:
 *  0 == not created directory
 *  1 == created directory
**/
{
    struct stat sb;
    if (stat(dir, &sb) == -1)
    {
        mkdir(dir, 0754);
        return 1;
    }

    return 0;
}
