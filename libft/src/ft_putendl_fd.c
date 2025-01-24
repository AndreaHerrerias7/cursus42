/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:01:06 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:18:24 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Output a string followed by a newline to a file descriptor

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/* int	main(void)
{
	ft_putendl_fd("hola", 1);
} */