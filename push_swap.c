/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:37:48 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/19 22:49:17 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		return (1);
	if (ac == 2)
		split_args(ac, av, &a);
	else
		fill_stack_a(ac, av, &a);
	if (!stack_sorted(a))
	{
		if (stack_size(a) == 2)
			sa(&a, false);
		else if (stack_size(a) == 3)
			sort_three_nodes(&a);
		else
			stack_sorter(&a, &b);
	}
	free_stack(&a);
	return (0);
}
