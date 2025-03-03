/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:09:46 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/08 12:46:54 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n[4], int a[4])
{
	int	sum1;
	int	sum2;

	sum1 = a[1] + a[0] * 10;
	sum2 = a[3] + a[2] * 10;
	if (sum1 < sum2)
	{
		write(1, &n[0], 1);
		write(1, &n[1], 1);
		write(1, " ", 1);
		write(1, &n[2], 1);
		write(1, &n[3], 1);
		if (!(n[0] == '9' && n[1] == '8' && n[2] == '9' && n[3] == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_intern(char n[4], int a[4])
{
	while (n[1] <= '9')
	{
		n[2] = '0';
		a[2] = 0;
		while (n[2] <= '9')
		{
			n[3] = '0';
			a[3] = 0;
			while (n[3] <= '9')
			{
				ft_print(n, a);
				n[3]++;
				a[3]++;
			}
			n[2]++;
			a[2]++;
		}
		n[1]++;
		a[1]++;
	}
	n[0]++;
	a[0]++;
}

void	ft_print_comb2(void)
{
	char	n[4];
	int		a[4];

	n[0] = '0';
	a[0] = 0;
	while (n[0] <= '9')
	{
		n[1] = '0';
		a[1] = 0;
		ft_intern(n, a);
	}
}

int	main(void)
{
	ft_print_comb2();
}