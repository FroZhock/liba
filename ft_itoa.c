/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:04:14 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 18:45:11 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
static int	sizeofint(long int	n)
{
	int			i;
	long int	m;

	i = 0;
	if (n < 0 || n == -0)
		m = n * -1;
	else
		m = n;
	if (n == 0)
		return (1);
	else
	{
		while (m)
		{
			m /= 10;
			i++;
		}
	}
	return (i);
}

static void	revarr_for_itoa(long int	n, char	*arr)
{
	int			i;
	long int	m;
	int			k;

	i = 0;
	k = sizeofint(n);
	if (n < 0 || n == -0)
		m = n * (-1);
	else
		m = n;
	while (k--)
	{
		arr[i++] = (char)(m % 10 + '0');
		m = m / 10;
	}
	if (n < 0)
	{
		arr[i] = '-';
		arr[i + 1] = '\0';
	}
	else
		arr[i] = '\0';
}

char	*ft_itoa(int	n)
{
	int		i;
	int		j;
	char	a[20];
	char	*p;

	revarr_for_itoa((long int)n, a);
	p = (char *)malloc(sizeof(char) * (ft_strlen(a) + 1));
	if (p == NULL)
		return (NULL);
	j = 0;
	i = (int)(ft_strlen(a) - 1);
	while (i >= 0)
		p[j++] = a[i--];
	p[j] = '\0';
	return (p);
}
