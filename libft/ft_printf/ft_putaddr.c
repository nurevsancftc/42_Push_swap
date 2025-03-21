/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:38:31 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/18 09:45:34 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr_hex_c(void *addr)
{
	char	*c;
	int		i;

	c = "0123456789abcdef";
	i = 0;
	if ((size_t)addr > 15)
		i += ft_putaddr_hex_c((void *)((size_t)addr / 16));
	i += ft_putchar_c(c[(size_t)addr % 16]);
	return (i);
}

int	ft_putaddr_c(void *addr)
{
	int	i;

	i = 0;
	i += ft_putstr_c("0x");
	i += ft_putaddr_hex_c(addr);
	return (i);
}
