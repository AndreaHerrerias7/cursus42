/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:20:17 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/02 22:47:05 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp_r;

	alp_r = 'z';
	while (alp_r >= 'a')
	{
		write(1, &alp_r, 1);
		alp_r--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
