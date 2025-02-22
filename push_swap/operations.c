/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:45:26 by aherreri          #+#    #+#             */
/*   Updated: 2025/02/22 00:47:56 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// mode 1 = sa, mode 2 = sb, mode 3 = ss
void	swap(t_stack *stack_a, t_stack *stack_b, int mode)
{
	int	ptr_temp;
	int	i;

	i = 0;
	if (mode == 3)
		printf("ss\n");
	else if (mode == 2)
		printf("sb\n");
	else
		printf("ss\n");
	if (mode == 1 || mode == 3)
	{
		ptr_temp = stack_a->value;
		stack_a->value= stack_a->next->value;
		stack_a->next->value = ptr_temp;
	}
	i = 0;
	if (mode == 2 || mode == 3)
	{
		ptr_temp = stack_b->value;
		stack_b->value = stack_b->next->value;
		stack_b->next->value = ptr_temp;
	}
	return ;
}


void	push(t_stack *stack_a, t_stack *stack_b, int mode)
{
	if (mode == 1)
	{
		printf("pa\n");
		stack_a = ft_lstnew(stack_b->value);
	}
	if (mode == 2)
	{
		printf("pb\n");
		stack_b = ft_lstnew(stack_a->value);
	}
	return ;
}