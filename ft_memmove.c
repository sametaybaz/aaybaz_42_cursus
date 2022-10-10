/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:35:16 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/10 13:32:54 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*usrc;
	unsigned char	*udst;
	unsigned char	temp[len];

	if (dst == NULL && src == NULL)
		return (NULL);
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;
	ft_memcpy(temp, usrc, len);
	ft_memcpy(udst, temp, len);
	return (dst);
}

/*
int main() 
{ 
    char dest[] = "samet";
    char src[] = "aybaz";

    printf("%s",ft_memmove(dest,src,2));
}
// Copies 'len' bytes(with temp array) from string 'src' to 'dst'.
// But Two strings may overlap.
*/