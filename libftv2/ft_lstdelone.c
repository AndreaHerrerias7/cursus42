/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:18:14 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/19 19:56:33 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *lst)
{
	free(lst);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
    ft_lstdelone(lst, del);
	//printf("%s", (char *)node2 -> content);
    //printf("Before: %s \n", (char *)lst->content);
    return 0;
} */
