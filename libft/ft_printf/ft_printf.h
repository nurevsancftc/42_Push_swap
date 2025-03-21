/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:38:28 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/18 09:45:32 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"

int	ft_printf(const char *format, ...);
int	ft_printf_router(va_list *args, char op);
int	ft_putchar_c(int c);
int	ft_putstr_c(char *str);
int	ft_putnbr_c(long n);
int	ft_puthex_c(unsigned int n, char op);
int	ft_putaddr_c(void *addr);
int	ft_putaddr_hex_c(void *addr);

#endif
