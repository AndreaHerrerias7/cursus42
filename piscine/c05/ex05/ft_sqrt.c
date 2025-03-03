/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:31:24 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/20 20:17:26 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	while (counter != nb)
	{
		if (counter * counter == nb)
		{
			return (counter);
		}
		counter++;
	}
	return (0);
}

/* int	main(void)
{
	int	a = ft_sqrt(9);
	printf("%i", a);
} */