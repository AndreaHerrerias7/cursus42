/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 20:33:02 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/09 23:50:08 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0')
		{
			if (little[j + 1] == '\0' && (i + j) < len)
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	big[30] = "hola adios ornitorrinco";
	char	little[5] = "adio";
	size_t	len = 10;
	char	*ptr_cad;

	ptr_cad = ft_strnstr(big, little, len);
	printf("%s", ptr_cad);
} */