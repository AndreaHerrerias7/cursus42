/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:47:59 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:15 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		b;

	start = str;
	b = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')) && b)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			b = 0;
		}
		else if (!(*str >= 'a' && *str <= 'z') && !(*str >= '0' && *str <= '9'))
			b = 1;
		str++;
	}
	return (start);
}

/* int	main(void)
{
	char a[100] = ".sALUT, oMment 4tu vas ? quaraNte-deux; cinqua5nte";

	printf("%s \n", ft_strcapitalize(a));
} */