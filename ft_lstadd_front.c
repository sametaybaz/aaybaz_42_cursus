/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:13:19 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 14:46:59 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* 
** ft_lst_add_front will provide Adds the element 'new'
** at the beginning of the list.
** my_tlist = {{content2,content1}}; or you can think like ;
** my_tlist = {{content: content2, next : {content: content1,next: NULL}}}; 
*/

/* 
** int main()
** {
**	t_list *my_tlist = (t_list *)malloc(sizeof(t_list));
** 	char content1[20] = "CONTENT1";
** 	t_list *linked_list_item1 = ft_lstnew((void *)content1);
** 	
**	char content2[20] = "CONTENT2";
** 	t_list *linked_list_item2 = ft_lstnew((void *)content2);
** 	ft_lstadd_front(&my_tlist, linked_list_item1);
** 	ft_lstadd_front(&my_tlist, linked_list_item2);
** 	
**	printf("The result is %s\n", (char *)my_tlist[0].content);
** 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
** 	return 0;
** }  
*/
