/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:28:46 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/03 15:24:21 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, const char **argv)
{
    int 	i;
	int 	val;
	char	**a_str;
	int		*a_int;

    i = 0;
	val = 1;
	
	while(val < argc)
	{
		if (ft_strchr(argv[val], ' '))
		{
			a_str = ft_split(argv[val], ' ');
		}
		val++;
	}
	while (a_str[i])
	{
		a_int[i] = ft_atoi(a_str[i]);
		i++;
	}
	printf("a_int %i", a_int[5]);
}