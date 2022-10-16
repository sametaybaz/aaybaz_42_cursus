/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:51:54 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 22:26:44 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* 
** int main(void)
** {   
**    int *ptr;
** 	  int count;
**    int i;
   
**    count = 10;
**    ptr =  (int *)ft_calloc(count,sizeof(int)); 
    
**    for(i=0; i<count; i++)
**    {
**        printf("%d\n",*ptr);
**    }
** } 
*/
/* 
** The calloc() function in C is used to allocate a specified 
** amount of memory and then initialize it to zero.
 */