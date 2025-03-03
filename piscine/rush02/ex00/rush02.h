#ifndef RUSH02_H
# define	RUSH02_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *load_dict(const char *filename);
char *strchr(const char *str, char c);
void ft_process_line(char *line, char **key, char **value);

#endif