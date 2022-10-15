/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:56:24 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 12:17:58 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	while (i < srcsize && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (srcsize);
}

/* 
** int main() 
** { 
**    char dst[] = "samet";
**    char src[] = "aybaz";
**
**    printf("%zu",ft_strlcpy(dst,src,2));
** } 
*/

/* 
** Copies up to 'dstsize - 1' characters from string 'src' to 'dst'.
** -1 for null char put null character after exiting while loop , after 
** return src size(len).
*/
