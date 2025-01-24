/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:54:39 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:17:21 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns a string applying a function to each character of a string

#include "libft.h"

/* char	f(unsigned int i, char c)
{
	return (c + i);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char *str = ft_strmapi("hola", f);
	printf("Cadena: %s", str);
} */
