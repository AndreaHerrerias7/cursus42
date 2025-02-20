/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:40:44 by aherrerias        #+#    #+#             */
/*   Updated: 2025/02/20 22:29:55 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>


int	ft_counter(const char *s, char c);
char	*ft_word(const char *s, int start, int end);
int	ft_free_split(char **str, int j);
int	ft_fill_split(char **str, char const *s, char c);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *nptr);
char	*ft_strchr(const char *s, int c);
void	swap(int *ptr_a, int *ptr_b, int mode);

#endif