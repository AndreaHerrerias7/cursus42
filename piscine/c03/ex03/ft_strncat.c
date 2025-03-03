/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:12:00 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/19 12:10:24 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*copy_dest;
	unsigned int	i;

	copy_dest = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (copy_dest);
}

/*int	main(void)
{
	char	*res;
	char	list_dest[20] = "hola";
	char	list_src[7] = " mundo";
	unsigned int	nb;

	nb = 3;
	res = ft_strncat(&list_dest[0], &list_src[0], nb);
	printf("El nuevo valor de la lista es %s", list_dest);
	printf("\n y el resultado es: %c", *res);
}*/
