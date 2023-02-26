/**
 * TITLE: config.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 24.02.2023
 * UPDATED AT: 24.02.2023
 *
 * DESCRIPTION:
**/

#ifndef CONFIG_H
#define CONFIG_H

typedef struct
{
    char *metadatas;
    char *author;
    char *email;
    char *followme;
    char *description;
}
f_config;

#define CONFIG_DIR "~/.mkfiles_config"

#endif // CONFIG_H
