/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:45:32 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:28:11 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* 
** int main()
** { 
**    char dest[] = "samet"; 
**    char src[] = "aybaz";
**
**    printf("%s",ft_memcpy(dest,src,2));
** }  
*/

/*
** Copies 'n' bytes from memory area 'src' to memory area 'dst'.
** and return copied dst from src.
*/
