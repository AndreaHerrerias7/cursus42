/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:00:29 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 19:52:05 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_word(const char *s, int start, int end)
{
	int		i;
	char	*word;

	word = malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	ft_free_split(char **str, int j)
{
	while (--j >= 0)
		free(str[j]);
	free(str);
	return (0);
}

static int	ft_fill_split(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			str[j++] = ft_word(s, start, i);
			if (!str[j - 1])
				ft_free_split(str, j);
		}
		else
			i++;
	}
	str[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (str == NULL)
		return (NULL);
	if (!ft_fill_split(str, s, c))
		return (NULL);
	return (str);
}

/* int main(void)
{
	int		i;
	int 	counter;
	char	str[60] = ",,, hey, what's up,,";
	char	c = ',';
	char 	**res = ft_split(str, c);
	
	i = 0;
	counter = 0;
	while(str[i] != '\0')
	{
		if (str[0] != c || str[i] != c && str[i-1] == c)
			counter++;
		i++;
	}
	i = 0;
	printf("%i \n", counter);
	while (counter--)
		printf("%s \n", res[i++]);
	
} */