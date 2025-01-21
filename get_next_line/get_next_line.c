/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:15:59 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/18 21:34:03 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_line(int fd, char *buf)
{
	int		ret;
	char	*temp;
	char	c;
	int		cap;
	int		val;
	
	ret = 1;
	temp = malloc(BUFFER_SIZE + 1);
	while (ret >= 0)
	{
		cap = 0;
		ret = read(fd, temp, BUFFER_SIZE);
		val = ret;
		while(val--)
		{
			printf("Valor de ret: %i ", ret);
			temp[ret] = '\0';
			if (ft_strchr(&temp[cap], '\n') != NULL)
				break;
			printf("temp: %s ", temp);
			buf = ft_strjoin(buf, temp);
			printf("buf: %s\n", buf);
		}
	}
	return (buf);
} */

char	*clear_temp_line(char *temp_line)
{
	char	*new_temp_line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(temp_line, '\n');
	if (!ptr)
	{
		new_temp_line = NULL;
		return (ft_free(&temp_line));
	}
	else
		len = (ptr - temp_line) + 1;
	if (!temp_line[len])
		return (ft_free(&temp_line));
	new_temp_line = ft_substr(temp_line, len, ft_strlen(temp_line)- len);
	ft_free(&temp_line);
	if (!new_temp_line)
		return (NULL);
	return (new_temp_line);
}

char	*new_line(char *temp_line)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(temp_line, '\n');
	len = (ptr - temp_line) + 1;
	line = ft_substr(temp_line, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_fd(int fd, char *temp_line)
{
	int		ret;
	char	*buf;

	ret = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&temp_line));
	buf[0] = '\0';
	while (ret > 0 && !ft_strchr(buf, '\n'))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret > 0)
		{
			buf[ret] = '\0';
			temp_line = ft_strjoin(temp_line, buf);
		}
	}
	free(buf);
	if (ret == -1)
		return (ft_free(&temp_line));
	return (temp_line);
}

char	*get_next_line(int fd)
{
	static char		*temp_line = NULL;
	char			*line;

	if (fd < 0)
		return (NULL);
	if ((temp_line && !ft_strchr(temp_line, '\n')) || !temp_line)
		temp_line = read_fd(fd, temp_line);
	if (!temp_line)
		return (NULL);
	line = new_line(temp_line);
	if (!line)
		return (ft_free(&temp_line));
	temp_line = clear_temp_line(temp_line);
	return (line);
}
/* int main(void)
{
	int		fd;
	char	*buf;

	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}

	buf = get_next_line(fd);
	printf("Contenido:\n%s\n", buf);

	buf = get_next_line(fd);
	printf("Contenido:\n%s\n", buf);
	
	buf = get_next_line(fd);
	printf("Contenido:\n%s\n", buf);
	
	buf = get_next_line(fd);
	printf("Contenido:\n%s\n", buf);
		
	buf = get_next_line(fd);
	printf("Contenido:\n%s\n", buf);
	free(buf);
	close(fd);
	return (0);
} */
