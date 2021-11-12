/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:54:02 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 19:09:13 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	sizeofp(char const	*s, unsigned int	start, size_t	len)
{
	if (start > ft_strlen(s))
		return (1);
	else if (ft_strlen(s) < len)
		return (ft_strlen(s) - start + 1);
	else
		return (len + 1);
}

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (sizeofp(s, start, len)));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			p[j] = s[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
