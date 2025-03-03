/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:49:22 by lgerecz           #+#    #+#             */
/*   Updated: 2024/11/03 19:32:58 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Call other function
void	ft_putchar(char c);

//Print line
void	print_line(int cx, int cy, int x, int y)
{
	if ((cy == 1 && cx == 1) || (cx == x && cy == y && y != 1 && x != 1))
	{
		ft_putchar('/');
	}
	else if ((cx == x && cy == 1) || (cx == 1 && cy == y))
	{
		ft_putchar('\\');
	}
	else if (cy == 1 || cy == y || cx == 1 || cx == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

//Function RUSH01
void	rush(int x, int y)
{
	int	cx;
	int	cy;

	if (x > 0 && y > 0)
	{
		cy = 1;
		while (cy <= y)
		{
			cx = 1;
			while (cx <= x)
			{
				print_line(cx, cy, x, y);
				cx++;
			}
			ft_putchar('\n');
			cy++;
		}
	}
	else
	{
		write(1, "ERROR", 5);
	}
}
