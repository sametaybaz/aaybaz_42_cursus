/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:20:07 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/12 12:20:07 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
/*
int main()
{
    char    *content = "samet";
    t_list  *new_list;
    new_list = ft_lstnew((void *)content);
    printf("%s", new_list->content);
}
// t_list new_list = {"samet"}

// you can think like that {{content:"samet",next:NULL}} or 
// {{"samet",NULL}} but because of null we shoulndt 
// use extra bracket because we have one variable inside .(null not typing normally)
// so next ist just controlling for next element(list) .
*/



