/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 11:29:09 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 14:10:02 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*b;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			b = ft_lstlast(*lst);
			b->next = new;
		}
		else
			*lst = new;
	}
}
