/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:08:28 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:58:37 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*strjoin;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = (char *)malloc(len1 + len2 + 1);
	if (!(strjoin))
		return (NULL);
	ft_memcpy(strjoin, s1, len1);
	ft_memcpy(strjoin + len1, s2, len2);
	strjoin[len1 + len2] = '\0';
	return (strjoin);
}

/* 
** int main()
** {
**	char s1[] = "samet_";
**	char s2[] = "aybaz";
**
**	printf("%s",ft_strjoin(s1,s2));
** } 
*/

/*
** Firstly allocated memory area for s1 len + s2 len after this memory 
** area firstly fill s1 as a copied len1 byte after rest of len2 byte fill 
** s2 and finally add null char end of memory area .  
** synopsis :  ft_strjoin - Concatenate an s1, s2 into a single string.
*/
