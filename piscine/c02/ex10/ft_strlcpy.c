/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:17:56 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:21 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	i;

	i = 0;
	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	while (i != (size - 1))
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (size_src + 1);
}

/* int	main(void)
{
	char	lista_src[11] = "hola Mundo";
	char	lista_dest[5];
	unsigned int n = 5;
	int size_src = 0;

	// ft_strcpy(lista_dest, lista_src);
	// write(1, lista_dest, 5);
	size_src = ft_strlcpy(lista_dest, lista_src, n);
	printf("El valor de la lista copiada es %s", lista_dest);
	printf("\n y el valor de la cadena era %i", size_src);
} */
