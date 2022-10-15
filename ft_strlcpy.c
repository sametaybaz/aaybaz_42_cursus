/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:56:24 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 13:56:03 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
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
** Copies up to 'size - 1' characters from string 'src' to 'dst'.
** -1 for null char put null character after exiting while loop , after 
** return src size(len).
*/
