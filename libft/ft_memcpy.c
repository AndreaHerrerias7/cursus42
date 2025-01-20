/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:45:49 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/08 20:16:27 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy memory area

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[10] = "AA";
	char	src[10] = "1ao123";
	void	*ptr;
	size_t n = 6;

	ptr = ft_memcpy(((void*)0), ((void*)0), 3);
	printf("%s", dest);
} */