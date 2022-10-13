/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:20:07 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:12:59 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element == NULL)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

/* 
** int main()
** {
**    char    *content = "samet";
**    t_list  *new_element;
**    new_element = ft_lstnew((void *)content);
**    printf("%s", new_element->content);
** } 
*/

/* 
** t_list new_element = {"samet"}
** you can think like that {{content:"samet",next:NULL}} or
** {{"samet",NULL}} but because of null we shoulndt 
** use extra bracket because we have one variable inside.
** so next ist just controlling for next element(list) . 
*/
