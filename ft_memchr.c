/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:25:17 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/16 16:34:08 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void	*arr, int	c, size_t	n)
{
	size_t		i;
	const char	*p;

	i = 0;
	p = arr;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(arr + i));
		else
			i++;
	}
	return (NULL);
}
