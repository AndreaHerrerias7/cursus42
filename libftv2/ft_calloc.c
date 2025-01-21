/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:11:40 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/10 23:56:39 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc (nmemb * size);
	if (str == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}

/* int main()
{
    size_t n = 4;
    size_t element_size = sizeof(int);

    // Usar ft_calloc para asignar memoria
    int *arr = (int *)ft_calloc(n, element_size);
    if (arr == NULL)
    {
        printf("Error al asignar memoria con ft_calloc\n");
        return 1;
    }

    // Verificar que los elementos están inicializados a 0
    printf("Valores iniciales (usando ft_calloc):\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Liberar memoria asignada
    free(arr);

    return 0;
} */