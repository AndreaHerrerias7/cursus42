/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:21:50 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/17 10:58:51 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trim leading and trailing a set of characters from a string

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (ft_calloc(1, sizeof(char)));
	start = 0;
	while (ft_strchr(set, s1[start]) && *s1 != '\0')
		start++;
	end = ft_strlen(s1) - 1;
	if (end <= start)
		return (ft_calloc(1, sizeof(char)));
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	str = malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char	*str = ft_strtrim("", "dfsa");
	printf("La cadena nueva es: %s", str);
} */