/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:14:46 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 22:28:00 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*usrc;
	char	*udst;

	usrc = (char *)src;
	udst = (char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			udst[len] = usrc[len];
		}
	}
	return (dst);
}

/*
** 
** int main()
** {
**	char str[5] = "ILE";
**	char *str2 = str + 1;
**
**	printf("%s",ft_memmove(str2,str,3));
** } 
*/

/* 
** The memmove() function copies len bytes from string src to string dst.
*/
