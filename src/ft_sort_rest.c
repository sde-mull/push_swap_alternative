/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:15:44 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/03 03:15:44 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort_rest(t_Node **stack_A, t_Node **stack_B)
{
    int *first;
    int *last;
    int nbr;
    int index;
    
    index = 0;
    nbr = ft_get_arr_len(*stack_A);
    first = malloc((nbr) * sizeof(int));
    last = malloc((nbr) * sizeof(int));
    ft_fill_first_last(first, last, nbr, *stack_A);
    ft_sort500b(first, last, stack_A, stack_B, nbr);
    free(first);
    free(last);
}
void    ft_fill_first_last(int *first, int *last, int nbr, t_Node *stack_A)
{
    int mov;
    int index;

    mov = nbr * 50;
    index = 0;
    while (nbr > 0)
    {
        first[index] = ft_get_first(stack_A, mov);
        last[index] = ft_get_last(stack_A, mov);;
        mov = mov - 50;
        index++;
        nbr = nbr - 1;
    }
}

void    ft_sort500b(int *first, int *last, t_Node **stack_A, t_Node **stack_B, int nbr)
{
    int     index;
    int     index2;
    t_Node  *temp;
    int     checkf;
    int     checkl;

    index = 0;
    index2 = 0;
    while (index < nbr)
    {
        printf("first index is %d\n", first[index]);
        index++;
    }
    ft_pa(stack_A, stack_B);
}
