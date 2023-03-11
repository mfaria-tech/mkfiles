/**
 * TITLE: errs.h
 * AUTHOR: Marcus Faria
 * CREATED AT: 21.02.2023
 * UPDATED AT: 21.02.2023
**/

#ifndef ERRS_PRIVATE_H
#define ERRS_PRIVATE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "errs.h"

#define FILENAME "logs_error_mkfiles"

void display_log(const errs *err);
char *read_file(void);
char *get_localtime(void);
void set_log(errs *err, char *log, char *msg);
void save_log(const errs *err);

#endif // ERRS_PRIVATE_H
