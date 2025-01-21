/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:37:39 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 19:13:54 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	copy_dst;

	i = 0;
	j = 0;
	copy_dst = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	if (ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	if (size <= 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + copy_dst);
}

/* int	main(void)
{
	char	dest[10] = "a";
	size_t	hola = ft_strlcat(dest, "lorem ipsum", 15);
	printf("%zu", hola);
	printf("\n");
	write(1, dest, 15);
} */