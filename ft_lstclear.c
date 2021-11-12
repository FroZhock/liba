/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 11:50:11 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/10/17 12:04:07 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *lst;
	if (lst != NULL || del != NULL)
	{
		while (ptr)
		{
			tmp = ptr->next;
			del(ptr->content);
			free(ptr);
			ptr = tmp;
		}
		*lst = NULL;
	}
}
