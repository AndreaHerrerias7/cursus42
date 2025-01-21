/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:19:18 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/20 19:08:55 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (!dest && !src)
		return (0);
	if (ptr_dest < ptr_src)
	{
		while (n != 0)
		{
			n--;
			*ptr_dest++ = *ptr_src++;
		}
	}
	else
	{
		while (n != 0)
		{
			n--;
			ptr_dest[n] = ptr_src[n];
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	a[10] = "12345";
	void	*ptr;
	size_t n = 3;

	//printf("%s", a);
	ptr = ft_memmove(a, "eeee", n);
	printf("%s", a);
} */