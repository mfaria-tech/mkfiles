/**
 * TITLE: config_private.c
 * AUTHOR: Marcus Faria
 * CREATED AT: 24.02.2023
 * UPDATED AT: 25.02.2023
**/

#ifndef CONFIG_PRIVATE_H
#define CONFIG_PRIVATE_H

#include <sys/stat.h>
#include <sys/types.h>

#include "config.h"

int check_dir(const char *dir);
int create_config(const char *file, const char *dir);
int set_config(const char *file, const char *dir);

#endif // CONFIG_PRIVATE_H
