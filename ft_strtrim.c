/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:57:37 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/22 11:59:01 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(char	c, char const	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	size_t	k;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	k = ft_strlen(s1) - 1;
	while (s1[i] && comp(s1[i], set))
		i++;
	while (k > 0 && comp(s1[k], set))
		k--;
	if (k == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, k - i + 1));
}
