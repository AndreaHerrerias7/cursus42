/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:15:49 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/11 16:29:28 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>
 */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start_dest;

	start_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (start_dest);
}

/* int	main(void)
{
	char	lista_src[5] = "hola";
	char	lista_dest[5];
	char	*ptr;

	// ft_strcpy(lista_dest, lista_src);
	// write(1, lista_dest, 5);
	ptr = ft_strcpy(lista_dest, lista_src);
	int i = 0;
	while (i < 4)
	{
		write(1, ptr, 1);
		ptr++;
		i++;
	}
} */