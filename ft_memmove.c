/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:35:16 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 17:57:50 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;

	tmp = malloc(sizeof(unsigned char) * (len + 1));
	if (dst == NULL && src == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

/* 
** int main() 
** { 
**   char dest[] = "samet";
**   char src[] = "aybaz";
**
**  printf("%s",ft_memmove(dest,src,2));
** }  
*/

/* 
** Copies 'len' bytes(with temp array) from string 'src' to 'dst'.
** But Two strings may overlap. output will be (aymet)
*/
