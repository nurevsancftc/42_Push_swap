/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:37:51 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/20 19:10:32 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				is_above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

int				check_syntax_error(char *str_n);
int				is_number_in_stack(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			exit_with_error(t_stack_node **a);

void			fill_stack_a_two_arg(int ac, char **av, t_stack_node **a);
void			split_args(int argc, char **argv, t_stack_node **stack_a);
void			fill_stack_a(int ac, char **av, t_stack_node **a);
void			add_node_to_stack(t_stack_node **stack, int n);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			free_memory(char **av);
void			exit_with_error_2(t_stack_node **a, char **av);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest_node(t_stack_node *stack);
t_stack_node	*get_min_cost_node(t_stack_node *stack);
void			prepare_push(t_stack_node **s, t_stack_node *n, char c);

int				stack_size(t_stack_node *stack);
t_stack_node	*get_last_node(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*get_min_node(t_stack_node *stack);
t_stack_node	*get_max_node(t_stack_node *stack);

void			sa(t_stack_node **a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **b, t_stack_node **a, bool print);

void			sort_three_nodes(t_stack_node **a);
void			stack_sorter(t_stack_node **a, t_stack_node **b);

void			rotate_both(t_stack_node **a, t_stack_node **b,
					t_stack_node *cheapest_node);
long long		ft_atol(const char *s);
#endif