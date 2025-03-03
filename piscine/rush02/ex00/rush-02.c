/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:23:39 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/16 22:29:31 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 4096
#define MAX_LINE 256
#define MAX_NUM_STR 128
#define MAX_DICT_ENTRIES 100

typedef struct s_dict_entry {
    unsigned long long number;
    char *word;
} t_dict_entry;

typedef struct s_dict {
    t_dict_entry entries[MAX_DICT_ENTRIES];
    int count;
} t_dict;

// Utility functions
void ft_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
}

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

char *trim(char *str) {
    char *end;
    while (is_space(*str)) str++;
    if (*str == 0)
        return str;
    end = str + strlen(str) - 1;
    while (end > str && is_space(*end)) end--;
    *(end + 1) = '\0';
    return str;
}

// Dictionary parsing
int parse_dict_line(char *line, t_dict_entry *entry) {
    char *colon = strchr(line, ':');
    if (!colon)
        return 0;
    
    *colon = '\0';
    char *num_str = trim(line);
    char *word = trim(colon + 1);
    
    // Check for valid number
    char *ptr = num_str;
    while (*ptr) {
        if (*ptr < '0' || *ptr > '9')
            return 0;
        ptr++;
    }
    
    entry->number = strtoull(num_str, NULL, 10);
    entry->word = strdup(word);
    return 1;
}

int load_dictionary(const char *filename, t_dict *dict) {
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return 0;
    
    char buffer[BUFFER_SIZE];
    char line[MAX_LINE];
    int line_pos = 0;
    int bytes_read;
    dict->count = 0;
    
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
        for (int i = 0; i < bytes_read; i++) {
            if (buffer[i] == '\n' || line_pos >= MAX_LINE - 1) {
                line[line_pos] = '\0';
                if (line_pos > 0) {
                    if (parse_dict_line(line, &dict->entries[dict->count])) {
                        dict->count++;
                        if (dict->count >= MAX_DICT_ENTRIES)
                            break;
                    }
                }
                line_pos = 0;
            } else {
                line[line_pos++] = buffer[i];
            }
        }
    }
    
    close(fd);
    return 1;
}

// Number validation and conversion
int is_valid_number(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

void write_number(unsigned long long num, t_dict *dict, int *first) {
    if (num == 0)
        return;
        
    // Find largest value that fits
    int i;
    unsigned long long largest = 0;
    int largest_idx = -1;
    
    for (i = 0; i < dict->count; i++) {
        if (dict->entries[i].number <= num && dict->entries[i].number > largest) {
            largest = dict->entries[i].number;
            largest_idx = i;
        }
    }
    
    if (largest_idx == -1)
        return;
        
    if (num >= 100) {
        write_number(num / largest, dict, first);
        if (!*first)
            write(1, " ", 1);
        ft_putstr(dict->entries[largest_idx].word);
        *first = 0;
        write_number(num % largest, dict, first);
    } else {
        if (!*first)
            write(1, " ", 1);
        ft_putstr(dict->entries[largest_idx].word);
        *first = 0;
        write_number(num - largest, dict, first);
    }
}

void free_dictionary(t_dict *dict) {
    for (int i = 0; i < dict->count; i++)
        free(dict->entries[i].word);
}

int main(int argc, char **argv) {
    t_dict dict;
    char *dict_file = "numbers.dict";
    char *number_str;
    
    if (argc < 2 || argc > 3) {
        ft_putstr("Error\n");
        return 1;
    }
    
    if (argc == 3) {
        dict_file = argv[1];
        number_str = argv[2];
    } else {
        number_str = argv[1];
    }
    
    if (!is_valid_number(number_str)) {
        ft_putstr("Error\n");
        return 1;
    }
    
    if (!load_dictionary(dict_file, &dict)) {
        ft_putstr("Dict Error\n");
        return 1;
    }
    
    unsigned long long number = strtoull(number_str, NULL, 10);
    if (number == 0) {
        // Special case for zero
        for (int i = 0; i < dict.count; i++) {
            if (dict.entries[i].number == 0) {
                ft_putstr(dict.entries[i].word);
                write(1, "\n", 1);
                free_dictionary(&dict);
                return 0;
            }
        }
    }
    
    int first = 1;
    write_number(number, &dict, &first);
    write(1, "\n", 1);
    
    free_dictionary(&dict);
    return 0;
}