/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:19:36 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/22 10:44:16 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*endlst;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			endlst = ft_lstlast(*lst);
			endlst->next = new;
		}
		else
			*lst = new;
	}
}	
