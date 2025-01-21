/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:42:05 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 19:42:40 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* int	main(void)
{
	int a = ft_strncmp("abcdef", "abcx", 5);
	printf("%i", a);
} */