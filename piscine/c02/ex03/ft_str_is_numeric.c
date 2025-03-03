/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:05:33 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:17:44 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str > 47 && *str < 58))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}

/* int	main(void)
{
	char	*str;
	int	resultado;

	str = "1234567890";
	resultado = ft_str_is_numeric(str);
	printf("resultado %i", resultado);
} */
