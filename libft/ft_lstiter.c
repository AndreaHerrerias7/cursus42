/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:54:05 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/19 20:20:41 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(void *content)
{
	content = "a";
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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
    ft_lstiter(lst, f);
	printf("%s", (char *)lst -> content);
    //printf("Before: %s \n", (char *)lst->content);
    return 0;
} */