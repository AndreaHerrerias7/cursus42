/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:15:49 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/07 19:16:52 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start_dest;
	unsigned int	i;

	start_dest = dest;
	if (n > 0)
	{
		i = 0;
		while (i != n)
		{
			if (*src != '\0')
			{
				*dest = *src;
				src++;
			}
			else
			{
				*dest = '\0';
			}
			dest++;
			i++;
		}
	}
	return (start_dest);
}

/*int	main(void)
{
	char	lista_src[3] = "ho";
	int	n;

	n = 6;
	char	lista_dest[6];
	ft_strncpy(lista_dest, lista_src, n);
	//write(1, lista_dest, 2);
}*/
