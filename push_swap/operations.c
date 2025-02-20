/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:45:26 by aherreri          #+#    #+#             */
/*   Updated: 2025/02/20 22:34:08 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// mode 1 = sa, mode 2 = sb, mode 3 = ss
void	swap(int *ptr_a, int *ptr_b, int mode)
{
	int	*ptr_temp;
	int		i;

	i = 0;
	ptr_temp = NULL;
	if (mode == 1 || mode == 3)
	{
		ptr_temp = ptr_a;
		ptr_a[i] = ptr_a[i + 1];
		ptr_a[i + 1] = ptr_temp[i];
		printf("sa\n");
	}
	i = 0;
	if (mode == 2 || mode == 3)
	{
		ptr_temp[i] = ptr_b[i];
		ptr_b[i] = ptr_b[i + 1];
		ptr_b[i + 1] = ptr_temp[i];
		printf("sb\n");
	}
	return ;
}

/* void	push(void *ptr_a, void *ptr_b, int mode)
{
	void	*ptr_temp;

	ptr_temp = ptr_a;
	ptr_a = ptr_b;
	ptr_b = ptr_temp;
} */