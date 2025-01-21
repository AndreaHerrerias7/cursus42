/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:12:50 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 18:53:39 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
	{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

/* int main(void)
{
    size_t a = ft_strlen("ahhh");
    printf("%zu", a);
} */