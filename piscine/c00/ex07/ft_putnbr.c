/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:04:35 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/09 12:30:08 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write_number(char v)
{
	write (1, &v, 1);
}

int	ft_conv_number(int i, int max_value, int nb, int a)
{
	while (max_value > 10)
	{
		a++;
		max_value = max_value / 10;
		i = i * 10;
	}
	printf("El valor de a es: %i \n", a);
	ft_write_number(max_value + '0');
	while (nb % (1 * i) < (((1 * i)/10)-1))
	{
		ft_write_number('0');
	}
	nb = nb % (1 * i);
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	max_value;
	int	i;
	int	a;

	if (nb < 0)
	{
		ft_write_number('-');
		nb = -nb;
	}
	while (nb != 0)
	{
		i = 1;
		a = 0;
		max_value = nb;
		nb = ft_conv_number(i, max_value, nb, a);
	}
}

int	main(void)
{
	ft_putnbr(413);
	/* ft_putnbr(-293);
	ft_putnbr(2304); */
}
