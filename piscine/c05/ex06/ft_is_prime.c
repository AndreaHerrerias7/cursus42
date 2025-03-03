/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:37:13 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/20 23:00:59 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb == 0 || nb == 1)
		return (0);
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

/* int	main(void)
{
	int	a = ft_is_prime(145);
	printf("%i", a);
} */