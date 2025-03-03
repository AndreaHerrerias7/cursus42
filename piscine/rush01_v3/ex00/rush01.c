/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@c1r1s6.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:18:55 by epereyra          #+#    #+#             */
/*   Updated: 2024/11/11 15:17:51 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_erase_spc(char *parsed_n, char *input)
{
	char	*memdir;

	memdir = parsed_n;
	while (*input != 0)
	{
		if (*input != ' ')
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
	int		i;
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
	while (i <= 3)
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

void	ft_oposite_col(char *n_pack_up, char *n_pack_down, char table[4][4])
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

void	ft_oposite_rows(char *n_pack_left, char *n_pack_right, char table[4][4])
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
		if (*n_pack_left == '1' && *n_pack_right == '2')
		{
			table[i][3] = '3';
		}
		else if (*n_pack_left == '2' && *n_pack_right == '1')
		{
			table[i][0] = '3';
		}
		if (*n_pack_left == '2' && *n_pack_right == '3')
		{
			table[i][1] = '4';
		}
		else if (*n_pack_left == '3' && *n_pack_right == '2')
		{
			table[i][2] = '4';
		}
		i++;
		n_pack_left++;
		n_pack_right++;
	}
}

void	ft_complet_last_f(char table[4][4], int pos)
{
	int	i;
	int	num_zeros;
	int	sum_no_empty;

	i = 0;
	num_zeros = 0;
	sum_no_empty = 0;
	while (i <= 3)
	{
		sum_no_empty = sum_no_empty + table[pos][i] - '0';
		if (table[pos][i] == '0')
		{
			num_zeros++;
		}
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		if (num_zeros == 1)
		{
			if (table[pos][i] == '0')
			{
				table[pos][i] = 10 - sum_no_empty + '0';
			}
		}
		i++;
	}
}

void	ft_complet_last_c(char table[4][4], int pos)
{
	int		i;
	int		num_zeros;
	char	sum_no_empty;

	i = 0;
	num_zeros = 0;
	sum_no_empty = 0;
	while (i <= 3)
	{
		sum_no_empty = sum_no_empty + table[i][pos] - 48;
		if (table[i][pos] == '0')
		{
			num_zeros = num_zeros + 1;
		}
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		if (num_zeros == 1)
		{
			if (table[i][pos] == '0')
			{
				table[i][pos] = 10 - sum_no_empty + '0';
			}
		}
		i++;
	}
}

//input = "2312 3221 3123 2421";
//input = "3221122342211323"; // muy chunga
//input = "3321123332211223"; // tera chunga
//input = "1322321312233122";
//input = "2312322131232421";
int	main(int argc, char **argv)
{
	char	*input;
	int		i;
	char	parsed_n[17];
	int		j;
	char table[4][4] = {{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'}};

	if (argc != 2)
		return (0);
	input = argv[1];
	j = 0;
	i = 0;
	ft_erase_spc (parsed_n, input);
	ft_write_top_n_dwn (parsed_n, table, 0);
	ft_write_top_n_dwn (parsed_n + 4, table, 3);
	ft_write_side (parsed_n + 8, table, 0);
	ft_write_side (parsed_n + 12, table, 3);
	ft_oposite_col (parsed_n, parsed_n + 4, table);
	ft_oposite_rows (parsed_n + 8, parsed_n + 12, table);
	while (j <= 5)
	{
		i = 0;
		while (i <= 3)
		{
			ft_complet_last_f(table, i);
			ft_complet_last_c(table, i);
			i++;
		}
		j++;
	}
	print_table(table);
}
