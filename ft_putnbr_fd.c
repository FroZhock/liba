/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:19:16 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/22 13:09:00 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int	n, int	fd)
{
	int		i;
	char	m[11];

	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = n * -1;
		}
		while (n)
		{
			m[i] = (char)((n % 10) + '0');
			n = n / 10;
			i++;
		}
		while (i-- > 0)
			write(fd, &m[i], 1);
	}
}
