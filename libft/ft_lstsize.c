/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:47:17 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/18 14:57:52 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst->next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	i++;
	return (i);
}

/* int main() {
	int	*num = (int *)malloc(sizeof(int));

	*num = 3;
    t_list node1 = { num, NULL };
    t_list node2 = { "Node2", NULL };
	t_list node3 = { "Node3", NULL };

    t_list *lst = &node1;
    node1.next = &node2;
	node2.next = &node3;

	int n = ft_lstsize(lst);
    printf("%i", n);
} */
