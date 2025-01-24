/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:16:51 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/08 17:12:38 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert a character to lowercase

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 97 - 65;
	return (c);
}

/* int	main(void)
{
	int a = ft_tolower(77);
	printf("%i", a);
} */