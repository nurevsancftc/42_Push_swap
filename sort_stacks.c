/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:38:04 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/18 12:43:33 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate_both(t_stack_node **a,
								t_stack_node **b,
								t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}

static void	transfer_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_min_cost_node(*a);
	if (cheapest_node->is_above_median
		&& cheapest_node->target_node->is_above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->is_above_median)
		&& !(cheapest_node->target_node->is_above_median))
		rev_rotate_both(a, b, cheapest_node);
	prepare_push(a, cheapest_node, 'a');
	prepare_push(b, cheapest_node->target_node, 'b');
	pb(b, a, false);
}

static void	transfer_b_to_a(t_stack_node **a, t_stack_node **b)
{
	prepare_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != get_min_node(*a)->nbr)
	{
		if (get_min_node(*a)->is_above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	stack_sorter(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_size(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		transfer_a_to_b(a, b);
	}
	sort_three_nodes(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		transfer_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
