/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:06:49 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/21 15:38:24 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		ft_putchr(str[i]);
		i++;
	}
	return (i);
}

int	ft_writenumber(long long n, long base, int flag)
{
	int		count;

	count = 0;
	if (n < 0 && flag == 4)
		n = (unsigned int)n;
	if (flag == 1)
		n = (unsigned long)n;
	if (n < 0 && base == 10 && flag == 0)
	{
		count = count + ft_putchr('-');
		n = -n;
	}
	if (n >= base)
	{
		count = count + ft_writenumber(n / base, base, flag);
		count = count + ft_writenumber(n % base, base, flag);
	}
	if (n < base)
	{
		if ((n > 9 && flag == 2) || (n > 9 && flag == 1))
			count = count + ft_putchr('a' + (n % 10));
		else if (n > 9 && flag == 3)
			count = count + ft_putchr('A' + (n % 10));
		else if (n < 10)
			count = count + ft_putchr(n + '0');
	}
	return (count);
}

int	ft_puthex(unsigned long n, int flag)
{
	int	count;

	count = 0;
	if (flag == 2 || flag == 3)
		n = (unsigned int)n;
	if (flag == 1)
	{
		if (n == 0)
			return (write(1, "(nil)", 5));
		count = count + ft_putchr('0');
		count = count + ft_putchr('x');
		flag = 0;
	}
	count = count + ft_writenumber(n, 16, flag);
	return (count);
}
int	ft_putptr(unsigned long n, int flag)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count = count + ft_putptr(n / 16, 0);
		count = count + ft_putptr(n % 16, 0);
	}
	if (n < 16)
	{
		if (n > 9)
			count = count + ft_putchr('a' + (n % 10));
		else if (n < 10)
			count = count + ft_putchr(n + '0');
	}
	return (count);
}
