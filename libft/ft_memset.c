/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:50:01 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:42:03 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0 ;
	while (i < n)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* 
** int main()
** {
**	char str[] = "samet";
**	ft_memset(str,'b',2);
**	printf("%s",str); 
** } 
*/

/* 
** The memset() function fills the first n bytes of the memory 
** area pointed to by s with the constant byte c.

** Fill byte of(two) the memory area with character('b') our str 
** and start to fill of adress first element of str . 
*/
