/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:16:46 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/18 09:52:04 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static void	ft_write_number(char *str, long n, int *ptr_i)
{
	if (n >= 10)
	{
		ft_write_number(str, n / 10, ptr_i);
		ft_write_number(str, n % 10, ptr_i);
	}
	else
	{
		str[*ptr_i] = n + '0';
		(*ptr_i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	str = (char *)malloc(sizeof(char) * (ft_length(nb) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		str[i] = '-';
		i++;
		nb = -nb;
	}
	ft_write_number(str, nb, &i);
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char *str = ft_itoa(-2147483648);
	printf("El valor es: %s", str);
}
 */