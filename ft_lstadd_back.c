/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:32:38 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/12 17:32:38 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!*lst)
		*lst = new;
	last = ft_lstlast(*lst);
	last->next = new;
}

/* add new element end of the list and return anything . */
