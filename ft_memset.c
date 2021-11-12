/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:17:26 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 14:19:14 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void	*b, int	c, size_t	len)
{
	size_t		i;
	char		*p;

	i = 0;
	p = b;
	while (i != len)
	{
		p[i] = (char)c;
		i++;
	}
	return (b);
}