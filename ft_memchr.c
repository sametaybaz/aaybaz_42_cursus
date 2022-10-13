/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:59:33 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:23:17 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* 
** int main()
** {
**    char s[] = "samet";
**    printf("%s",ft_memchr(s,'m',3)); 
** } 
*/

/* 
** ft_memchr is search(by indexing) n bytes of the memory area
** for find  matching char('m') inside string(s). if find it 
** it will return (met) . 
*/
