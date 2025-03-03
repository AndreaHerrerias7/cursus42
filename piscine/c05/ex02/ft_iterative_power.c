/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:08:27 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/20 20:15:12 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			ans = ans * nb;
			power--;
		}
	}
	return (ans);
}

/* int	main(void)
{
	int a = ft_iterative_power(2, 4);
	printf("%i", a);
} */