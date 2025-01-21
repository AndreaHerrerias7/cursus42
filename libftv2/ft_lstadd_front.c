/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:32:10 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:26 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	new->next = *lst;
	*lst = new;
}

/* int main() {
	int	*num = (int *)malloc(sizeof(int));

	*num = 3;
    t_list node1 = { num, NULL };
    t_list node2 = { "Node2", NULL };
    t_list new_node = { "NewNode", NULL };

    t_list *lst = &node1;
    node1.next = &node2;

    printf("Before: %d -> %s\n", *(int *)lst->content, 
	(char *)lst->next->content);
    ft_lstadd_front(&lst, &new_node);
    printf("After: %s -> %d -> %s\n", (char *)lst->content, 
	*(int *)lst->next->content, (char *)lst->next->next->content);

    return 0;
} */