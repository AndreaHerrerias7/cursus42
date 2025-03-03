/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:21:39 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/21 17:00:17 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	list_str[15] = "hola caracol";
	char	list_needle[5] = "ciil";
	char	*ptr_cad;
	ptr_cad = ft_strstr(&list_str[0], &list_needle[0]);
	char *ptr_prueba = strstr("hola caracol", "col");
	printf("valor de mi puntero %s", ptr_cad);
	printf(" y el de la libreria %s", ptr_prueba);
}
