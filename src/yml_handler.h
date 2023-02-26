/**
 * TITLE: yml_handling.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 25.02.2023
 * UPDATED AT: 25.02.2023
 *
 * DESCRIPTION:
**/

#ifndef YML_HANDLER_H
#define YML_HANDLER_H

#include <yaml.h>

int read_handler(void *ext, char *buf, int size, int *length);
int write_handler(void *ext, char *buf, int size);
int yml_emitter();
int yml_parser();

#endif // YML_HANDLER_H
