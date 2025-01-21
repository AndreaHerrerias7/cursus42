/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:15:57 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 18:59:20 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = 0;
	return (s);
}

/* int main(void)
{
    char    str[10] = "holaa";

    printf("%s \n", str);
	ft_bzero(str+2, 2);
    printf("%s", str);
} */