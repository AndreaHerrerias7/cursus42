/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:10:58 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:26:51 by aherrerias       ###   ########.fr       */
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