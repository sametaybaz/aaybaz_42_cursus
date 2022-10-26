/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:47 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 15:02:04 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c < dstsize - 1)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/* 
** int main()
** { 
**    char dst[] = "samet";
** 	  char src[] = "aybaz";
**
**    printf("%zu",ft_strlcat(dst,src,2)); 
**    printf("%zu",ft_strlcat(dst,src,7)); 
** } 
*/

/* 
** if dstsize = 2 will return 7 but it wont cat our strings
** just give if we want add 2 two char to dest we should type 
** 7 for dstsize.  
** if dstsize = 7 will return 10 for total cat length 
** but ıt will add one char from src and null char to end.
*/
