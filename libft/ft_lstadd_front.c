/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:13:19 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 22:17:54 by aaybaz           ###   ########.fr       */
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
** 
** int	main()
** {	
**	
**	t_list *one_element; 
**	t_list *second_element;  
**
**	one_element = malloc(sizeof(t_list));
**	second_element = malloc(sizeof(t_list));
**
**	one_element->content = "aybaz";
**	one_element->next = NULL;
**	
**	second_element->content = "samet ";
**	
**	ft_lstadd_front(&one_element,second_element);
**	
**	while (second_element)
**	{
**		printf("%s",second_element->content);
**		second_element = second_element->next;
**	}	
** } 
*/

/* 
** ft_lst_add_front will provide Adds the element 'new'
** at the beginning of the list.
** you can think like that ;
**
** my_tlist = {{content: content2, next : {content: content1,next: NULL}}};
** my_tlist = {{content: content2, next:content1}}
** ==> my_tlist = {{"content2","content1"}};  
*/
