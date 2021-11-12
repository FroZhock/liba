/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:32:26 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 17:21:18 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	int		i;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}
