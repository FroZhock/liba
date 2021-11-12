/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:24:03 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 15:03:00 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char	*str, int	ch)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i + 1)
	{
		if (str[i] == (char)ch)
			return ((char *)(str + i));
		else
			i--;
	}
	return (NULL);
}
