/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:28:46 by aherrerias        #+#    #+#             */
/*   Updated: 2025/01/29 19:03:16 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, const char **argv)
{
    int i;
	int val;
	char	**a;

    i = 0;
	val = 0;
	
	while(val != argc - 1)
	{
		if (ft_strchr(argv[val + 1], ' '))
		{
			a = ft_split(argv[val + 1], ' ');
			while (a[i] != (void *)0)
			{
				printf("Valor: %s \n", a[i]);
				i++;
			}
		}
		val++;
	}
}