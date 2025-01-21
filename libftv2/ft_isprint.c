/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:12:35 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 18:51:31 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	ans;

	ans = 0;
	if (c >= 32 && c <= 126)
		ans = 1;
	return (ans);
}

/* int main(void)
{
    int res = ft_isprint('d');
    printf("%i", res);
} */