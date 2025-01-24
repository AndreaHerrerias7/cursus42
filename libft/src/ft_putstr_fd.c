/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:57:08 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:18:01 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Output a string to a file descriptor

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/* int	main(void)
{
	ft_putstr_fd("hola", 1);
} */