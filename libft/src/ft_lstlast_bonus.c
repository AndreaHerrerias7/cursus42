/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:59:10 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:21:46 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Get the last element of a list

#include "libft.h"

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

/* int main() {
	int	*num = (int *)malloc(sizeof(int));

	*num = 3;
    t_list node1 = { num, NULL };
    t_list node2 = { "Node2", NULL };

    t_list *lst = &node1;
    node1.next = &node2;
	
	t_list	*res = ft_lstlast(lst);
	printf("%s", (char *)res->content);
} */