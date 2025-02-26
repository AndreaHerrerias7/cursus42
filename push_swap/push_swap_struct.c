/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:26:38 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/26 17:40:56 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Add a new node in the list*/
t_stack	*ft_lstnew(int value)
{
	t_stack	*lst;

	lst = (t_stack *)malloc(sizeof(t_stack));
	if (lst == NULL)
		return (NULL);
	lst->value = value;
	lst->next = NULL;
	return (lst);
}

/*Return the last node of the list*/
t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}

/*Add a node at end of the list*/
void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

void	ft_lstdelone(t_stack *lst)
{
	if (!lst)
		return ;
	free(lst);
}

/*Iterate over each node of the list and apply the function f*/
/* void	ft_lstiter(t_stack *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->value);
		lst = lst->next;
	}
} */