/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:03:04 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/12 19:03:04 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// each element turns of lst with while loop and f function 
// apply each element .
/*
void ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
}
int main ()
{
	t_list *a;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew("samet "));
	ft_lstadd_back(&a, ft_lstnew("aybaz"));
	ft_lstiter(a, (void (*)(void *))ft_putstr);
}
*/
