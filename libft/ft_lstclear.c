/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:45:09 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/19 19:56:59 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *lst)
{
	free(lst);
} */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* int main() {
    t_list *node1;
    t_list *node2;
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node1->content = malloc(6 * sizeof(char));
	node2->content = malloc(6 * sizeof(char));
	node1->content = ft_memcpy(node1->content, "node1", 6);
	node2->content = ft_memcpy(node2->content, "node2", 6);
    t_list *lst = node1;
    node1->next = node2;
    printf("Before: %s -> %s\n", (char *)lst->content, 
	(char *)lst->next->content);
    ft_lstclear(&lst, del);
	//printf("%s", (char *)node2 -> content);
    //printf("Before: %s \n", (char *)lst->content);
    return 0;
} */

