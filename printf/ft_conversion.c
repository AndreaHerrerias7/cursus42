/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:06:49 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/19 19:08:48 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_writenumber(long n, int base)
{
	int		i;
	int		count;

	i = 0;
	if (n >= base)
	{
		ft_writenumber(n / base, base);
		ft_writenumber(n % base, base);
	}
	if (n < base)
	{
		if (n > 9)
			count = count + ft_putchr('a' + (n % 10));
		if (n < 10)
			count = count + ft_putchr(n + '0');
	}
	return(i);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = count + ft_putchr('0');
	count = count + ft_putchr('x');
	count = count + ft_writenumber((long)ptr, 16);
	return (2 + count);
}

int	ft_putdec(double n)
{
	int	count;
	count = count + ft_writenumber(n, 10);
	return (count);
}

/*int	main(void)
{
	int b = ft_putdec(4542);
}*/
