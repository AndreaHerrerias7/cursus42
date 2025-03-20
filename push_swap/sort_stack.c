/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:51:15 by andre             #+#    #+#             */
/*   Updated: 2025/03/14 22:52:48 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sort 2 elements
void sort_two(t_stack **stack_a)
{
    if ((*stack_a)->value > (*stack_a)->next->value)
        swap(*stack_a, NULL, 1); // sa
}

// Sort 3 elements
void sort_three(t_stack **stack_a)
{
    int a, b, c;
    
    a = (*stack_a)->value;
    b = (*stack_a)->next->value;
    c = (*stack_a)->next->next->value;
    
    if (a > b && b < c && a < c)
        swap(*stack_a, NULL, 1); // sa
    else if (a > b && b > c)
    {
        swap(*stack_a, NULL, 1); // sa
        reverse_rotate(stack_a, NULL, 1); // rra
    }
    else if (a > b && b < c && a > c)
        rotate(stack_a, NULL, 1); // ra
    else if (a < b && b > c && a < c)
    {
        swap(*stack_a, NULL, 1); // sa
        rotate(stack_a, NULL, 1); // ra
    }
    else if (a < b && b > c && a > c)
        reverse_rotate(stack_a, NULL, 1); // rra
}

// Find the position of the smallest value
int find_smallest_pos(t_stack *stack)
{
    int min = stack->value;
    int pos = 0;
    int min_pos = 0;
    t_stack *current = stack;
    
    while (current)
    {
        if (current->value < min)
        {
            min = current->value;
            min_pos = pos;
        }
        current = current->next;
        pos++;
    }
    
    return min_pos;
}

// Sort 5 elements
void sort_five(t_stack **stack_a, t_stack **stack_b, int size)
{
    int smallest_pos;
    int i;
    
    // Push smallest 2 elements to stack B
    for (i = 0; i < 2; i++)
    {
        smallest_pos = find_smallest_pos(*stack_a);
        
        // Decide whether to use rotate or reverse_rotate
        if (smallest_pos <= size / 2)
        {
            while (smallest_pos-- > 0)
                rotate(stack_a, NULL, 1); // ra
        }
        else
        {
            while (smallest_pos++ < size)
                reverse_rotate(stack_a, NULL, 1); // rra
        }
        
        push(stack_a, stack_b, 2); // pb
        size--;
    }
    
    // Sort remaining 3 elements
    sort_three(stack_a);
    
    // Push elements back to stack A
    push(stack_b, stack_a, 1); // pa
    push(stack_b, stack_a, 1); // pa
}

// Get the maximum number of bits needed to represent the largest number
int get_max_bits(t_stack *stack)
{
    int max = stack->value;
    int max_bits = 0;
    t_stack *current = stack;
    
    while (current)
    {
        if (current->value > max)
            max = current->value;
        current = current->next;
    }
    
    // Calculate number of bits needed
    while ((max >> max_bits) != 0)
        max_bits++;
        
    return max_bits;
}

// Radix sort implementation
void radix_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    int i, j;
    int max_bits = get_max_bits(*stack_a);
    
    // Iterate through each bit position
    for (i = 0; i < max_bits; i++)
    {
        // Check each number in stack A
        for (j = 0; j < size; j++)
        {
            // If the bit at position i is 0, push to stack B
            if (((*stack_a)->value >> i) & 1)
                rotate(stack_a, NULL, 1); // ra
            else
                push(stack_a, stack_b, 2); // pb
        }
        
        // Push all elements back to stack A
        while (*stack_b)
            push(stack_b, stack_a, 1); // pa
    }
}

void sort_stack(t_stack **stack_a, t_stack **stack_b)
{
    int size = 0;
    t_stack *temp = *stack_a;
    
    // Count the number of elements
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    
    // Choose sorting algorithm based on size
    if (size == 2)
        sort_two(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size <= 5)
        sort_five(stack_a, stack_b, size);
    else
        radix_sort(stack_a, stack_b, size);
}