/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_two_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:42:15 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/20 19:07:57 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a_two_arg(int ac, char **av, t_stack_node **a)
{
	int			i;
	long long	num;

	i = 0;
	while (i < ac)
	{
		if (check_syntax_error(av[i]))
			exit_with_error_2(a, av);
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			exit_with_error_2(a, av);
		if (is_number_in_stack(*a, (int)num))
			exit_with_error_2(a, av);
		add_node_to_stack(a, (int)num);
		i++;
	}
	if (ac == 0)
		exit_with_error_2(a, av);
}

void	split_args(int ac, char **av, t_stack_node **stack_a)
{
	char	**new_av;
	int		new_ac;

	(void)ac;
	new_av = NULL;
	new_av = ft_split(av[1], ' ');
	if (!new_av)
		return ;
	new_ac = 0;
	while (new_av[new_ac])
		new_ac++;
	fill_stack_a_two_arg(new_ac, new_av, stack_a);
	free_memory (new_av);
}

void	free_memory(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free (av);
}
