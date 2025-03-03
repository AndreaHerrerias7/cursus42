/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:21:00 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/20 20:14:41 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

/* int	main(void)
{
	int	ans = ft_iterative_factorial(5);	
	printf("El resultado es: %i", ans);
} */
