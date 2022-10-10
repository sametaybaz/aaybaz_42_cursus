/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:18:32 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/10 13:31:23 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    char s1[] = "aa";
    char s2[] = "ab";
    
    printf("%d",ft_memcmp(s1,s2,2));
}
// ft_memcmp :  compares memory areas s1 and s2 
// The difference ft_strncmp we are not checking null terminated 
// in the while loop and We also use pointing memory adress 
// when compare .
*/