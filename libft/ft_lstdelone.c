/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:06:02 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 14:52:46 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{	
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
** del using for delete content and a element of list (lst)
** but we didnt del lst->next so if we have next element .
** after free method using for deallocated this allocated memory. 
*/