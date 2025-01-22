/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:25:30 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/21 15:37:00 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char const c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + ft_putchr(va_arg(arg, int));
	else if (c == 's')
		count = count + ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count = count + ft_puthex(va_arg(arg, unsigned long), 1);
	else if (c == 'd' || c == 'i')
		count = count + ft_writenumber(va_arg(arg, int), 10, 0);
	else if (c == 'u')
		count = count + ft_writenumber(va_arg(arg, int), 10, 4);
	else if (c == 'x')
		count = count + ft_puthex(va_arg(arg, unsigned int), 2);
	else if (c == 'X')
		count = count + ft_puthex(va_arg(arg, unsigned int), 3);
	else if (c == '%')
		count = count + ft_putchr('%');
	return (count);
}

int	ft_printf(char const *fmt, ...)
{
	va_list	arg;
	int		count;
	int		i;

	va_start(arg, fmt);
	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			count = count + ft_conversion(fmt[i + 1], arg);
			i++;
		}
		else
			count = count + ft_putchr(fmt[i]);
		i++;
	}
	return (count);
}

/* int	main(void)
{
	int	b = printf(" %p ", -1);
	printf("%i\n", b);
	int a = ft_printf(" %p ", -1);
	printf("%i\n", a);	
} */