/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:09:15 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/08 17:12:24 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert a character to uppercase

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 97 + 65;
	return (c);
}

/* int	main(void)
{
	int a = ft_toupper(97);
	printf("%i", a);
} */
