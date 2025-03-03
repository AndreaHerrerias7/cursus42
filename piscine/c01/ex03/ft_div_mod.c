/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:48:26 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/04 16:29:54 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int *ptr_div;
	int *ptr_mod; 

	ptr_div = &div;
	ptr_mod = &mod;

	ft_div_mod(5,5,ptr_div,ptr_mod);
	printf("La división es %i y el resto %i", div, mod);
	
}*/