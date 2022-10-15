/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:40:44 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 15:00:53 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* 
** Returns the last element of the list. 
*/

/* 
** int		main(void)
** {
**	char	str1[] = "first element";
**	char	str2[] = "last element";
**
**	t_list	*elem1;
**	t_list	*elem2;
**	t_list	*last_elem;
**
**	if(!(elem1 = malloc(sizeof(t_list))))
**		return (0);
**	if(!(elem2 = malloc(sizeof(t_list))))
**		return (0);
**
**	elem1->next = elem2;
**	elem2->next = NULL;
**
**	elem1->content = (void *)str1;
**	elem2->content = (void *)str2;
**	last_elem = ft_lstlast(elem1);
**	printf("%s", (char *)last_elem->content);
** } 
*/
