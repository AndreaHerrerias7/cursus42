/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:36:11 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/24 09:19:32 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a new list element

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/* int	main(void)
{
	char	data;

	data = 'd';
	t_list *lst = ft_lstnew(&data);
	printf("%i", *(char *)lst->content);
	//printf("%i", *(char *)lst->next);
} */