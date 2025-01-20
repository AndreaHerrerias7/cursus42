/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epereyra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:18:55 by epereyra          #+#    #+#             */
/*   Updated: 2024/11/10 12:12:38 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_erase_spc(char *parsed_n, char *input)
{
	char	*memdir;

	memdir = parsed_n;
	while(*input != 0)
	{
		if(*input != ' ')
		{
			*parsed_n = *input;
			parsed_n++;
		}
		input++;
	}
	*parsed_n = '\0';
	return (memdir);
}


void	print_table(char table[4][4])
{
	int	i;
	char	*string = table[0];

	i = 1;
	while (i <= 16)
	{
		write(1, string, 1);
		string++;
		i++;
		if (i % 4 == 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
	}
}

void	ft_write_top_n_dwn(char *n_pack, char table[4][4], int pos)
{
	int	i;

	i = 0;
	while(i <= 3)
	{
		if (*n_pack == '1')
		{
			table[pos][i] = '4';
		}
		if (*n_pack == '4')
			table[pos][i] = '1';
		i++;
		n_pack++;
	}
}

void	ft_write_side(char *n_pack, char table[4][4], int pos_i)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (*n_pack == '1')
		{
			table[i][pos_i] = '4';
		}
		if (*n_pack == '4')
			table[i][pos_i] = '1';
		i++;
		n_pack++;
	}
}

void	ft_oposite_o_f(char *n_pack_up, char *n_pack_down, char table[4][4])
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (*n_pack_up == '1' && *n_pack_down == '4')
		{
			table[1][i] = '3';
			table[2][i] = '2';
		}
		else if (*n_pack_up == '4' && *n_pack_down == '1')
		{
			table[1][i] = '2';
			table[2][i] = '3';
		}
		if (*n_pack_up == '1' && *n_pack_down == '2')
		{
			table[3][i] = '3';
		}
		else if (*n_pack_up == '2' && *n_pack_down == '1')
		{
			table[0][i] = '3';
		}
		if (*n_pack_up == '2' && *n_pack_down == '3')
		{
			table[1][i] = '4';
		}
		else if (*n_pack_up == '3' && *n_pack_down == '2')
		{
			table[2][i] = '4';
		}
		i++;
		n_pack_up++;
		n_pack_down++;
	}
}

void	ft_oposite_l_r(char *n_pack_left, char *n_pack_right, char table[4][4])
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (*n_pack_left == '1' && *n_pack_right == '4')
		{
			table[i][1] = '3';
			table[i][2] = '2';
		}
		else if (*n_pack_left == '4' && *n_pack_right == '1')
		{
			table[i][1] = '2';
			table[i][2] = '3';
		}
		if(*n_pack_left == '1' && *n_pack_right == '2')
		{
			table[i][3] = '3';
		}
		else if(*n_pack_left == '2' && *n_pack_right == '1')
		{
			table[i][0] = '3';
		}
		if(*n_pack_left == '2' && *n_pack_right == '3')
		{
			table[i][1] = '4';
		}
		else if(*n_pack_left == '3' && *n_pack_right == '2')
		{
			table[i][2] = '4';
		}
		i++;
		n_pack_left++;
		n_pack_right++;
	}
}

int	ft_comp(char *parsed_n, char table[4][4])


void	ft_print_number_r(char *parsed_n, table[4][4])
{
	int	i;
	int	j;
	int	flag;

	//Le paso todos los parsed_n y luego ya divido para no tener que pasar muchas variables
	i = 0;
	flag = 0;
	while ( i <= 3)
	{
		while (j <= 3)
		{
			if (table[i][j] == '0')
			{
				while ( flag != 1)
				{
					table[i][j] = table[i][j] + '1';
					flag = ft_comp(parsed_n, table):
				}
			}
		j++;
		}
	i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	char	*input;

	//char	tablero[4][4];
	char	parsed_n[17];

	input = argv[1];
	char table[4][4] = {{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'}};
	//ordeno las caras
	//write(1, ft_erase_spc(parsed_n, input), 17);

	//col_up = a_dest[0];
	//col_down = a_dest[4];
	//row_right = a_dest[8];
	//row_left = a_dest[12];
	ft_erase_spc(parsed_n, input);
//	print_table(table);
	ft_write_top_n_dwn(parsed_n, table, 0);
	ft_write_top_n_dwn(parsed_n+4, table, 3);
	ft_write_side(parsed_n+8, table, 0);
        ft_write_side(parsed_n+12, table, 3);
	ft_oposite_o_f(parsed_n, parsed_n+4, table);
	ft_oposite_l_r(parsed_n+8, parsed_n+12, table);
	print_table(table);
}
