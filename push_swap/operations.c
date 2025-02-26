/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:45:26 by aherreri          #+#    #+#             */
/*   Updated: 2025/02/26 18:25:52 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// mode 1 = sa, mode 2 = sb, mode 3 = ss
void	swap(t_stack *stack_a, t_stack *stack_b, int mode)
{
	int	ptr_temp;
	int	i;

	i = 0;
	if (mode == 1)
		printf("sa\n");
	else if (mode == 2)
		printf("sb\n");
	else
		printf("ss\n");
	if (mode == 1 || mode == 3)
	{
		if (stack_a && stack_a->next)
		{
			ptr_temp = stack_a->value;
			stack_a->value= stack_a->next->value;
			stack_a->next->value = ptr_temp;
		}
	}
	if (mode == 2 || mode == 3)
	{
		if (stack_b && stack_b->next)
		{
			ptr_temp = stack_b->value;
			stack_b->value = stack_b->next->value;
			stack_b->next->value = ptr_temp;
		}
	}
	return ;
}
void add_data(t_stack **src_stack, t_stack **dest_stack)
{
	t_stack	*temp;

	if (*src_stack == NULL)
		return ;
	temp = *src_stack;
	*src_stack = (*src_stack)->next;
	ft_lstadd_back(dest_stack, temp);
}

void push(t_stack **stack_a, t_stack **stack_b, int mode)
{
	if (mode == 1)
	{
		if (*stack_b)
		{
			printf("pa\n");
			add_data(stack_b, stack_a);
		}	
	}
	if (mode == 2)
	{
		if (*stack_a)
		{
			printf("pb\n");
			add_data(stack_a, stack_b);
		}
	}
	return ;
}
void rotate(t_stack **stack_a, t_stack **stack_b, int mode)
{
	
}