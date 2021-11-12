/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:26:37 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/22 12:35:13 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && i + j < len && s1[i + j])
				j++;
			if (j == ft_strlen(s2))
				return ((char *)(s1 + i));
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}
