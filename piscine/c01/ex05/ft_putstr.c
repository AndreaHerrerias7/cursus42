/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:55:55 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/04 16:28:13 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 4);
}

/*int	main(void)
{
	char	a[4] = "123";
	char	*ptr_a;
	int	i;

	ptr_a = &a[0];
	ft_putstr(ptr_a);
}*/