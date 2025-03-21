# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 09:37:45 by nuciftci          #+#    #+#              #
#    Updated: 2025/03/20 15:40:55 by nuciftci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= push_swap

SRCS				= 	handle_errors.c sort_three_nodes.c swap.c init_a_to_b.c \
					push.c rev_rotate.c init_b_to_a.c \
					rotate.c stack_init.c push_swap.c sort_stacks.c \
					stack_utils.c for_two_arg.c
					
LIBFT_DIR			= libft
LIBFT				= $(LIBFT_DIR)/libft.a
CC					= cc
CFLAGS				= -Wall -Wextra -Werror -I$(LIBFT_DIR) -g
RM					= rm -f

$(NAME): $(LIBFT) $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	make -s -C $(LIBFT_DIR)

all: $(NAME)

clean:
	make -s -C $(LIBFT_DIR) clean

fclean: clean
	make -s -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re