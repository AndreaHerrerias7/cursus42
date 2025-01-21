/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:58:44 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 19:44:08 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s_conv;
	size_t			i;

	s_conv = s;
	i = 0;
	while (i != n)
	{
		if ((unsigned char)*s_conv == (unsigned char)c)
			return ((void *)s_conv);
		i++;
		s_conv++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	str[10] = "Hloa";
	char	*res;

	res = ft_memchr(str, 'l', 7);
	printf("%s", res);
} */