/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:38:57 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/10 00:10:00 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate the last occurrence of a character in a string

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*res;

	ptr_s = (char *)s;
	res = NULL;
	while (*ptr_s != '\0')
	{
		if (*ptr_s == (char)c)
		{
			res = ptr_s;
		}
		ptr_s++;
	}
	if ((char)c == 0)
		return (ptr_s);
	return (res);
}

/* int	main(void)
{
	char	s[10] = "Holoa";
	int	c = 111;
	char	*ptr_occ = ft_strrchr(s, c);
	printf("%s", ptr_occ);
} */