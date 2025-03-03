/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:39:26 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/16 22:26:25 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

// Open dictionaty and read, save in buffer
char *load_dict(const char *filename) {
    int fd;
    char *buffer;
    int bytes_read;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        write(2, "Dict Error\n", 11);
        return NULL; 
    }
    buffer = (char *)malloc(sizeof(char) * 1024);
    if (buffer == NULL) {
        write(2, "Dict Error\n", 11);
        close(fd);
        return NULL;
    }
    bytes_read = read(fd, buffer, 1024 - 1);
    if (bytes_read < 0) {
        write(2, "Dict Error\n", 11);
        free(buffer);
        close(fd);
        return NULL;
    }
    buffer[bytes_read] = '\0';
    close(fd);
    return (buffer);
}

char *strchr(const char *str, char c) 
{
    while (*str) {
        if (*str == c) {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

char *my_strndup(const char *str, size_t n) {
    char *new_str;
    size_t i;

    new_str = (char *)malloc(n + 1);  // +1 para el terminador null
    if (new_str == NULL) {
        return NULL;  // Error al asignar memoria
    }

    for (i = 0; i < n && str[i] != '\0'; i++) {
        new_str[i] = str[i];
    }

    new_str[i] = '\0';  // Añadir el terminador null
    return new_str;
}

void ft_process_line(char *line, char **key, char **value) {
    char *colon_pos = strchr(line, ':');
    if (colon_pos == NULL) {
        *key = NULL;
        *value = NULL;
        return;
    }

    // Asignar la clave
    *key = strndup(line, colon_pos - line);  // Copiar la parte antes de ':'
    
    // Asignar el valor (después de ':')
    *value = strdup(colon_pos + 1);  // Copiar lo que está después de ':'

    // Eliminar espacios en blanco al principio y final
    // Usamos una función que elimine los espacios (función auxiliar)
    trim_spaces(key);
    trim_spaces(value);
}

// Función para eliminar espacios en blanco al principio y final de la cadena
void trim_spaces(char **str) {
    char *start = *str;
    char *end = *str + strlen(*str) - 1;

    // Eliminar espacios al principio
    while (*start == ' ' && start <= end) start++;

    // Eliminar espacios al final
    while (*end == ' ' && end >= start) end--;

    // Crear nueva cadena recortada
    if (start <= end) {
        size_t len = end - start + 1;
        char *trimmed = (char *)malloc(len + 1);
        if (trimmed) {
            strncpy(trimmed, start, len);
            trimmed[len] = '\0';
            free(*str);
            *str = trimmed;
        }
    } else {
        // Si no hay caracteres válidos
        free(*str);
        *str = NULL;
    }
}