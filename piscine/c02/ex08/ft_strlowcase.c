/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:24:19 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:08 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	char	*ptr_copy;

	ptr_copy = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 'a' - 'A';
		}
		str++;
	}
	return (ptr_copy);
}

/* int	main(void)
{
	char	list[7]= "aAedD";
	char	*ptr_res = ft_strlowcase(list);
	ptr_res++;
	printf("%s", list);
} */
