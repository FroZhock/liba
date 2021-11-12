/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:18:47 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/22 12:18:50 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*source, size_t	count)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)source;
	if (dest == NULL && source == NULL)
		return (NULL);
	if (count == 0)
		return (dest);
	while (i != count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
