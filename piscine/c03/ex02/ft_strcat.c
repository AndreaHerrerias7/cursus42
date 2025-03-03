/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:03:54 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:59 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*copy_dest;

	copy_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy_dest);
}

/* int	main(void)
{
	char	*res;
	char	lista_dest[20] = "hola";
	char	lista_src[7] = " mundo";
	
	res = ft_strcat(&lista_dest[0], &lista_src[0]);
	printf("Valor de lista es: %s", lista_dest);
	
} */
