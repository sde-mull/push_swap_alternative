/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:53:45 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/02 17:53:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort(t_Node **stack_A, t_Node **stack_B)
{
	int	count;
	int	sort;

	sort = 0;
	sort = ft_check_sorted(*stack_A);
	count = ft_stack_length(*stack_A);
	if (sort == 1)
		return ;
	if (count == 2)
		ft_2_sort(stack_A);
	if (count == 3)
		ft_3_sort(stack_A);
	//else if (count <= 104)
		//ft_sort_100(stack_A, stack_B);
	//else if (count > 100)
	else
		ft_sort_rest(stack_A, stack_B);
}

void	ft_2_sort(t_Node **stack_A)
{
	if (ft_check_sorted(*stack_A) == 0)
		ft_sa(stack_A);
}

void	ft_3_sort(t_Node **stack_A)
{
	t_Node	*first;
	t_Node	*mid;
	t_Node	*last;

	first = *stack_A;
	mid = first->next;
	last = mid->next;
	if (first->value > mid ->value && last->value > first->value)
		ft_sa(stack_A);
	else if (first->value > mid ->value && last->value < mid->value)
	{
		ft_sa(stack_A);
		ft_rra(stack_A);
	}
	else if (first->value > mid ->value && last->value < first->value)
		ft_ra(stack_A);
	else if (mid->value > first->value && first->value < last->value)
	{
		ft_sa(stack_A);
		ft_ra(stack_A);
	}
	else if (mid->value > first->value && first->value > last->value)
		ft_rra(stack_A);
}
