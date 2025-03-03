/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:25:03 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:33:38 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str > 31 && *str < 127))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}

/* int	main(void)
{
	char	*lista;
	int	resultado;

	lista = "";
	resultado = ft_str_is_printable(lista);
	printf("Lista: %s, y el resultado es %i", lista, resultado);
} */
