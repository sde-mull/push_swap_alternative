/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_fun_rest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:19:42 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/03 03:19:42 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    ft_get_first(t_Node *stack)
{
    int *sort_arr;
    int len;
    int nbr;


    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    nbr = ft_first(sort_arr, stack, len);
    free(sort_arr);
    return (nbr);
}

int     ft_first(int *arr, t_Node *stack_A, int len)
{   
    int mov;
    int index;

    index = 0;
    mov = (len - 100)/4;
    ft_fill_arr(arr, stack_A, len);
    while (index < len)
    {
        printf("arr is %d\n", arr[index]);
        index++;
    }
    return(arr[mov - 1]);
}

int    ft_get_last(t_Node *stack)
{
    int *sort_arr;
    int len;
    int nbr;


    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    nbr = ft_last(sort_arr, stack, len);
    free(sort_arr);
    return (nbr);
}

int     ft_last(int *arr, t_Node *stack_A, int len)
{   
    int mov;

    mov = (len - 100)/4;
    ft_fill_arr(arr, stack_A, len);
    return(arr[len - mov]);
}