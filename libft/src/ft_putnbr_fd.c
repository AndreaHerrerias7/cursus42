/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:09:44 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:18:46 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Output an integer to a file descriptor

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
}

/* int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
} */