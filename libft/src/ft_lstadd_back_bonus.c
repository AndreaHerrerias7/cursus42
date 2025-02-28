/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:04:59 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:20:25 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Add a new element to the end of a list

#include "libft.h"

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

/* int main() {
    t_list node1 = { "Node1", NULL };
    t_list node2 = { "Node2", NULL };
    t_list new_node = { "NewNode", NULL };

    t_list *lst = &node1;
    node1.next = &node2;
    printf("Before: %s -> %s\n", (char *)lst->content, 
	(char *)lst->next->content);
    ft_lstadd_back(&lst, &new_node);
    printf("After: %s -> %s -> %s\n", (char *)lst->content, 
	(char *)lst->next->content, (char *)lst->next->next->content);

    return 0;
} */
