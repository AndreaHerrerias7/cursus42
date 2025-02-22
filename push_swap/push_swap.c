/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:28:46 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/22 00:48:46 by andre            ###   ########.fr       */
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

void fill_stack(int *temp, int argc, char **argv)
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
				temp[j++] = ft_atoi(a_str[i]);
				i++;
			}
		}
		else
			temp[j++] = ft_atoi(argv[val]);
		val++;
	}
	temp[j] = 0;
}

t_stack	*create_stack_a(int *temp, size_t total_numbers)
{
	size_t i;
	t_stack *stack_a;
	t_stack *new_node;

	stack_a = NULL;
	i = 0;
	while(i < total_numbers)
	{
		new_node = ft_lstnew(temp[i]);
		if (!new_node)
			return (NULL);
		
		ft_lstadd_back(&stack_a, new_node);
		i++;
	}
	return (stack_a);
}

int main(int argc, char **argv)
{
	int *temp;
	size_t total_numbers = count_numbers(argc, argv);
	int j;
	t_stack	*stack_a;

	temp = malloc(sizeof(int) * (total_numbers + 1));
	if (!temp)
		return (0);

	fill_stack(temp, argc, argv);
	j = 0;
	while (temp[j])
	{
		printf("%i ", temp[j]);
		j++;
	}
	stack_a = create_stack_a(temp, total_numbers);
	free(temp);
	
	printf("Before: %i -> %i\n", stack_a->value, stack_a->next->value);
	
	t_stack	*stack_b;
	stack_b = NULL;
	printf("joel\n");
	push(stack_a, stack_b, 2);
	push(stack_a, stack_b, 2);
	swap(stack_a, stack_a, 1);
	printf("AFTER: %i -> %i\n", stack_a->value, stack_a->next->value);
	printf("AFTER: %i ", stack_b->value);
	return (0);
}
