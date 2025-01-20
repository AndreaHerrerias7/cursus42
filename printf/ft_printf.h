/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:00:31 by aherreri          #+#    #+#             */
/*   Updated: 2025/01/20 20:44:12 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int	ft_printf(char const *fmt, ...);
int	ft_conversion(char const c, va_list argumentos);
int	ft_puthex(unsigned int n, int flag);
int	ft_putptr(unsigned long n, int flag);
int	ft_writenumber(long n, long base, int flag);
int	ft_putstr(char *str);
int	ft_putchr(int c);


#endif