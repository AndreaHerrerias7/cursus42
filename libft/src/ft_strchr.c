/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:18:01 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/10 00:10:20 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate the first occurrence of a character in a string

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	while (*ptr_s != '\0')
	{
		if (*ptr_s == (char)c)
		{
			return (ptr_s);
		}
		ptr_s++;
	}
	if ((char)c == 0)
		return (ptr_s);
	return (NULL);
}

/* int	main(void)
{
	char	s[10] = "Hola";
	int	c = 0;
	char	*ptr_occ = ft_strchr(s, 't' + 256);
	printf("%s", ptr_occ);
} */