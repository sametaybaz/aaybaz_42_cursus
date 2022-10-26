/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:14:27 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:14:57 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* 
** turning lst and counting how many element inside this . 
*/

/* 
** int main()
** {   
**	char str1[] = "elem1";
**	char str2[] = "elem2";
**	t_list	*elem1;
**	t_list	*elem2;
	
**	if(!(elem1 = malloc(sizeof(t_list))))
**		return (0);
**	if(!(elem2 = malloc(sizeof(t_list))))
**		return (0);

**	elem1->next = elem2;
**	elem2->next = NULL;
	
**	elem1->content = (void *)str1;
**	elem2->content = (void *)str2;
**	int len_list = ft_lstsize(elem1);
**	printf("%d",len_list);
** } 
*/
