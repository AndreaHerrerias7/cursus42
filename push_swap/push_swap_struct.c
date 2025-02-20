/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:26:38 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/20 17:03:51 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Add a new node in the list*/
t_list	*ft_lstnew(int *value)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->value = value;
	lst->next = NULL;
	return (lst);
}

/*Return the last node of the list*/
t_list	*ft_lstlast(t_list *lst)
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
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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

/*Iterate over each node of the list and apply the function f*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->value);
		lst = lst->next;
	}
}