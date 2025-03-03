/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:53:42 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/04 16:30:15 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int	main(void)
{
	int	a;
	int	b; 
	int *ptr_a;
	int *ptr_b; 

	a = 5; 
	b = 5; 
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("La division es: %i y el resto: %i", a, b);
}*/