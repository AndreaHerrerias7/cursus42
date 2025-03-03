/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:27:32 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:27:23 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}

/* int	main(void)
{
	char	lista[5] = "dhjd";
	int	resultado;

	resultado = ft_str_is_alpha(lista);
	printf("Lista: %s, y el resultado es %i", lista, resultado);
}  */