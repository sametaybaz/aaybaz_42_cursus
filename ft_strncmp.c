/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:34:35 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 15:14:40 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0' ))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
** int main()
** { 
**    char s1[] = "aa";
**    char s2[] = "ab";
**
**    printf("%d",ft_strncmp(s1,s2,2));
** }
*/

/* 
** compare two strings (s1 and s2) and 
** n defines how many character we want to compare
** if n = 2 it will turn until i = 0 and i = 1
** after s1[1] = 'a' = 98 s2[1] = 'b' = 98 
** thats why s1[1] - s2[1] = -1 
** so s2 bigger than s1 as a value .
*/
