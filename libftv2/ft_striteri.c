/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:16:18 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/18 10:38:31 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(unsigned int i, char *c)
{
	c[i] = 'H';
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/* int	main(void)
{
	char	str[6] = "hola";

	ft_striteri(str, f);
	printf("Cadena: %s", str);
} */
