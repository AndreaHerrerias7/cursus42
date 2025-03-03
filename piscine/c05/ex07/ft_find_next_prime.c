/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:59:45 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/20 20:18:28 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	while (a < nb)
	{
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	a;
	int	flag;

	a = nb;
	flag = 0;
	while (flag != 1)
	{
		if (ft_is_prime(a) == 1)
		{
			flag = 1;
			return (a);
		}
		a++;
	}
	return (a);
}

/* int	main(void)
{
	int	a = ft_find_next_prime(4);
	printf("%i", a);
} */