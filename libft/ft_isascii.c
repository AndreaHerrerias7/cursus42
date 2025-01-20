/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:12:12 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 13:17:38 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check if a character is an ASCII character

#include "libft.h"

int	ft_isascii(int c)
{
	int	res;

	res = 0;
	if (c >= 0 && c <= 127)
		res = 1;
	return (res);
}

/* int main(void)
{
    int res = ft_isascii('d');
    printf("%i", res);
} */