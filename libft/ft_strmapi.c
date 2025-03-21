/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:41:13 by nuciftci          #+#    #+#             */
/*   Updated: 2025/03/18 09:44:48 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	size_t	i;

	buf = ft_strdup(s);
	if (!buf)
		return (NULL);
	i = 0;
	while (buf[i])
	{
		buf[i] = f(i, buf[i]);
		i++;
	}
	return (buf);
}
