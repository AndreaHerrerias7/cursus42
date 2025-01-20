/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:10:58 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/08 17:10:38 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if a character is alphanumeric
 
#include "libft.h"

int	ft_isalnum(int c)
{
	int	res;

	res = 0;
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		res = 1;
	return (res);
}

/* int main(void)
{
    int res = ft_isalnum('a');
    printf("%i", res);
} */