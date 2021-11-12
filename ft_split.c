/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:33:35 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/22 13:03:37 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_substr1(char const	*s, unsigned int	start, size_t	len)
{
	int		i;
	char	*p;

	i = 0;
	if (s == NULL)
		return (NULL);
	p = (char *)malloc(sizeof (char) * (len - start + 1));
	if (p == NULL)
		return (NULL);
	while (start < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

static int	numbofstrings(char const	*s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	if (s[0] == c && s[ft_strlen(s) - 1] == c)
		j--;
	else if (s[0] != c && s[0] != '\0' && s[ft_strlen(s) - 1] != c)
		j++;
	return (j);
}

static void	free_arr(size_t	k, char **p)
{
	size_t	i;

	i = 0;
	while (i < k - 1)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static char	**write_to_p(char const	*s, char	c, char	**p)
{
	int		i;
	size_t	j;
	size_t	k;

	i = -1;
	j = -1;
	k = 0;
	while (++j <= ft_strlen(s))
	{
		if (s[j] != c && i < 0)
			i = j;
		else if ((s[j] == c || j == ft_strlen(s)) && i >= 0)
		{
			p[k++] = ft_substr1(s, i, j);
			if (p[k - 1] == NULL)
			{
				free_arr(k, p);
				return (NULL);
			}
			i = -1;
		}
	}
	p[k] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (s == NULL)
		return (NULL);
	p = (char **)malloc(sizeof (char *) * (numbofstrings(s, c) + 1));
	if (p == NULL)
		return (NULL);
	p = write_to_p(s, c, p);
	return (p);
}
