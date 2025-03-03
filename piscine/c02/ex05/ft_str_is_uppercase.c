/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:21:20 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:29:34 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str > 64 && *str < 91))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}

/* int	main(void)
{
	char	lista[5] = "";
	int	resultado;

	resultado = ft_str_is_uppercase(lista);
	printf("Lista: %s, y el resultado es %i", lista, resultado);
} */
