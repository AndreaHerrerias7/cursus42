/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrerias <aherrerias@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:28:46 by aherrerias        #+#    #+#             */
/*   Updated: 2025/01/28 13:47:34 by aherrerias       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char *ptr_a;
    int a;

    if (argc != 2)
        return (printf("BAD \n"));
    ptr_a = argv[1];
    printf("el valor: %s \n", ptr_a);
    a = ft_atoi(ptr_a);
    printf(" valor %i \n", a);
}