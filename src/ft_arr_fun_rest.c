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

int    ft_get_first(t_Node *stack, int rem)
{
    int *sort_arr;
    int len;
    int nbr;


    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    nbr = ft_first(sort_arr, stack, len, rem);
    free(sort_arr);
    return (nbr);
}

int     ft_first(int *arr, t_Node *stack_A, int len, int rem)
{   
    ft_fill_arr(arr, stack_A, len);
    return(arr[rem]);
}

int    ft_get_last(t_Node *stack, int rem)
{
    int *sort_arr;
    int len;
    int nbr;


    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    nbr = ft_last(sort_arr, stack, len, rem);
    free(sort_arr);
    return (nbr);
}

int     ft_last(int *arr, t_Node *stack_A, int len, int rem)
{   
    ft_fill_arr(arr, stack_A, len);
    return(arr[len - rem]);
}