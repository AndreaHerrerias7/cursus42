/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:12:35 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 13:17:42 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if a character is a printable character

#include "libft.h"

int	ft_isprint(int c)
{
	int	res;

	res = 0;
	if (c >= 32 && c <= 126)
		res = 1;
	return (res);
}

/* int main(void)
{
    int res = ft_isprint('d');
    printf("%i", res);
} */