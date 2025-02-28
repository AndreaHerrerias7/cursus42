/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:10:08 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/08 17:28:11 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if a character is alphabetic

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	int b = ft_isalpha('Z');
	printf("%d  ", b);
	int	a;
	a = isalpha('h');
	printf("  %d", a);

} */