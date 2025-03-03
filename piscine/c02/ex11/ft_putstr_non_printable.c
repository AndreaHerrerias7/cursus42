/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:24:34 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/17 00:30:09 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hexa(char *str)
{
	int		a;
	int	b;
	int	c;
	char	hex[3];

	a = *str;
	b = (a / 16);
	if (b < 10)
		b = b + '0';
	else
		b = b + 'a' - 10;
	c = (a % 16);
	if (c < 10)
		c = c + '0';
	else
		c = c + 'a' - 10;
	write(1, "\\", 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			ft_put_hexa(str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char str[200] = "a";

	ft_putstr_non_printable(str);
}
