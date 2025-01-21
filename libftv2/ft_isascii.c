/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:12:12 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 18:51:47 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ans;

	ans = 0;
	if (c >= 0 && c <= 127)
		ans = 1;
	return (ans);
}

/* int main(void)
{
    int res = ft_isascii('d');
    printf("%i", res);
} */