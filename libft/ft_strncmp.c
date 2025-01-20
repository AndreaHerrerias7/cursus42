/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:42:05 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/10 00:02:33 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compare two strings up to a specified number of character

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && (s1[i] == s2[i]))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/* #include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
		size_t	i;

		i = 0;
		if ((!*s1 && !*s2) || n == 0)
				return (0);
		if (*s1 == '\0' || *s2 == '\0')
				return ((unsigned char)*s1 - (unsigned char)*s2);
		while (*s1 == *s2 && i < n - 1 && *s1 != '\0' && *s2 != '\0')
		{
				s1++;
				s2++;
				i++;
		}
		if (*s1 == *s2)
				return (0);
		if ((unsigned char)*s1 < (unsigned char)*s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);
		if ((unsigned char)*s1 > (unsigned char)*s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);
		return ((unsigned char)*s1 - (unsigned char)*s2);
} */
/* int	main(void)
{
	int a = ft_strncmp("abcdef", "abc\375xx", 5);
	printf("%i", a);
} */