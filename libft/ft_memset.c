/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:15:09 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 13:18:52 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fill memory with a constant byte

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = (char)c;
	return (s);
}

/* int main(void)
{
    char    str[10] = "holaa";

    printf("%s", str);
    ft_memset(str, '5', 2);
    printf("%s", str);
} */