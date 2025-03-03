/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:31:59 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/04 14:47:54 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	a;
	int	b;
	int *ptr_a;
	int *ptr_b;

	a = 1;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	printf("Valores antes de intercambiar a: %i, y b: %i \n", a, b);
	ft_swap(ptr_a, ptr_b);
	printf("Valores intercambiados a: %i y b: %i", a, b);
}*/