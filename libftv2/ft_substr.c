/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:42:54 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/11 22:17:32 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*res;

	i = 0;
	if (start >= ft_strlen(s))
	{
		res = (char *)malloc(1 * sizeof(char));
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* int	main(void)
{
	char	*res = ft_substr("hola", 5, 2);
	printf("La nueva cadena es: %s", res);
} */