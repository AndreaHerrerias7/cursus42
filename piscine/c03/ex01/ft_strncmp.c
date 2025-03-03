/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:30:33 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/09 21:21:29 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 = '0' && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned int)*s1 - (unsigned int)*s2);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		if (!s2)
			return (1);
		if (!s1)
			return (-1);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int i = ft_strncmp("haaghkhkghjkgjk", "hghigyuigyuigyuia", 8);
	printf("El valor es: %i", i);
}*/
