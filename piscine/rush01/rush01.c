/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@ .42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:23:11 by aherreri          #+#    #+#             */
/*   Updated: 2024/11/09 21:09:19 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write4(int i, int *f[4][4], int f_2[4][4])
{
	if (i == 0 || i == 8)
	{
		f[0][0][0] = 0;
		f[0][0][1] = 0;
		f[0][0][2] = 0;
		f_2[0][0] = f_2[0][0] - 6;
	0
		
	}
	
}

int	main(int argc, char **argv)
{
	char	*ptr_input;
	int c[4] = {1,2,3,4};
	int	*f[4][4] = {{c,c,c,c},{c,c,c,c},{c,c,c,c},{c,c,c,c}};
	int	f_2[4][4] = {{10,10,10,10},{10,10,10,10},{10,10,10,10},{10,10,10,10}};

	if (argc != 2)
		return (0);
	ptr_input = argv[1];

	//printf("Valores %c \n", ptr_input[2]);
	//printf("Matriz %i \n", f_2[2][0]);

	int i = 0;
	int j = 0;
	
	char	num[17] ="";
	while(i < 31)
	{
		if (!(i%2))
		{
			num[j] = ptr_input[i];
			j++;
		}
		i++;
	}
	num[j] = '\0';
	i = 0;
	while(num[i] != '\0')
	{
		printf("%c", num[i]);
		i++;
	}
	printf("\n");
	i = 0;

	char list[17] = "";
	while(num[i])
	{
		if (num[i] == '1')
		{
			ft_write4(i, f, f_2);
		}
		i++;
	}
	printf("matriz es %i \n", f_2[0][0]);
	printf("y el valor de la otra matriz %i \n", f[0][0][0]);
	printf("y el valor de la otra matriz %i \n", f[0][0][1]);
	printf("y el valor de la otra matriz %i \n", f[0][0][2]);
	printf("y el valor de la otra matriz %i \n", f[0][0][3]);
	i = 0;

	
}