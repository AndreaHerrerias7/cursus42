/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:14:52 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:18:04 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str > 96 && *str < 123))
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

	resultado = ft_str_is_lowercase(lista);
	printf("Lista: %s, y el resultado es %i", lista, resultado);
} */