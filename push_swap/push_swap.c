/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:28:46 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/12 13:27:46 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_numbers(int argc, char **argv)
{
	int count = 0;
	int i = 1;
	char **split;

	while (i < argc)
	{
		if (ft_strchr(argv[i], ' '))
		{
			split = ft_split(argv[i], ' ');
			for (int j = 0; split[j]; j++)
				count++;
		}
		else
			count++;
		i++;
	}
	return count;
}

void fill_stack(int *stack_a, int argc, char **argv)
{
	int val;
	int j;
	int	i;
	char **a_str;

	val = 1;
	j = 0;
	while (val < argc)
	{
		if (ft_strchr(argv[val], ' '))
		{
			i = 0;
			a_str = ft_split(argv[val], ' ');
			while (a_str[i])
			{
				stack_a[j++] = ft_atoi(a_str[i]);
				i++;
			}
		}
		else
			stack_a[j++] = ft_atoi(argv[val]);
		val++;
	}
	stack_a[j] = 0;
}

int main(int argc, char **argv)
{
	int *stack_a;
	int total_numbers = count_numbers(argc, argv);
	int j;

	stack_a = malloc(sizeof(int) * (total_numbers + 1));
	if (!stack_a)
		return (0);

	fill_stack(stack_a, argc, argv);
	j = 0;
	while (stack_a[j])
	{
		printf("%i ", stack_a[j]);
		j++;
	}
	return (0);
}
