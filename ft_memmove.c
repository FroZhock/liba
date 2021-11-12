/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:19:26 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/19 14:09:44 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void	*dest, const void	*source, size_t	count)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = source;
	if (dest == NULL && source == NULL)
		return (NULL);
	if (d > s)
	{
		i = count;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i++ < count)
			d[i - 1] = s[i - 1];
	}
	return (dest);
}
