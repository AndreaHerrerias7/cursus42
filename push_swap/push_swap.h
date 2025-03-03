/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:40:44 by aherrerias        #+#    #+#             */
/*   Updated: 2025/03/03 19:18:56 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

int	ft_counter(const char *s, char c);
char	*ft_word(const char *s, int start, int end);
int	ft_free_split(char **str, int j);
int	ft_fill_split(char **str, char const *s, char c);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *nptr);
char	*ft_strchr(const char *s, int c);
void	swap(t_stack *stack_a, t_stack *stack_b, int mode);
t_stack	*ft_lstnew(int value);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	push(t_stack **stack_a, t_stack **stack_b, int mode);
void	ft_lstadd_front(t_stack	**lst, t_stack	*new);

#endif