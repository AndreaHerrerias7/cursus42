/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:19:18 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/09 12:34:23 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy memory area taking overlapping into account

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
	char	b[10] = "xeottt";
	void	*ptr;
	size_t n = 6;

	//printf("%s", a);
	ptr = ft_memmove(a, "ee", n);
	printf("%s", a);
	int i = 0;
	char	*ptrr;
	ptrr = (char *)ptr;
	while (i < 10)
	{
		write(1, &a[i], 1);
		i++;
	}
} */