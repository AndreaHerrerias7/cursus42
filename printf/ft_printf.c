/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:25:30 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/20 20:52:26 by aherreri         ###   ########.fr       */
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

int	ft_writenumber(long n, long base, int flag)
{
	int		count;

	count = 0;
	if (n < 0 && flag == 4)
		n = (unsigned int)n;
	if (flag == 2 || flag == 3)
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

int	ft_puthex(unsigned int n, int flag)
{
	int	count;

	count = 0;
	//n = n & 0xFFFFFFFF;
	if (flag == 1)
	{
		if (n == 0)
			return (write(1, "(nil)", 5));
		count = count + ft_putchr('0');
		count = count + ft_putchr('x');
	}
	count = count + ft_writenumber(n, 16, flag);
	return (count);
}
int	ft_putptr(unsigned long n, int flag)
{
	int	count;

	count = 0;
	if (n < 0)
		n = (unsigned int) n;
	if (n == 0 && flag == 1)
		return (write(1, "(nil)", 5));
	if (flag == 1)
	{
		count = count + ft_putchr('0');
		count = count + ft_putchr('x');
		flag = 0;
	}
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

int	ft_conversion(char const c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + ft_putchr(va_arg(arg, int));
	else if (c == 's')
		count = count + ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count = count + ft_putptr(va_arg(arg, unsigned long), 1);
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