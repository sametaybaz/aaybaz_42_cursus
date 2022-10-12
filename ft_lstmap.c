/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:50:30 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/12 22:50:30 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
        new_elem = ft_lstnew(f(lst->content));
		if (!(new_elem))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
** while(lst) lst nin elemanları üzerinde dolaşcak loop.

** f(lst -> content) dolaşılan her lst elemanının 
** contentine f fonksiyonu uygulanacak bu sayede yeni liste
** için yeni elemanlarının yeni contentleri olcak.

** new_elem = ft_lstnew(f(lst->content)) f fonksitonundan
** uygulanan her lst elemanının contentine ft_lestnew fonks.
** uygulanarak new_liste için new_element olacak .

** new_element oluşturulamaz ise new_liste del edilip 
** return null edilecek .

** ft_lstadd_back(&new_lst, new_elem) oluşturulan her new
** elemanını new_listenin sonuna ekleyecek .

** lst = lst->next; lst her elemanında sırayla dolaşmak için.
*/