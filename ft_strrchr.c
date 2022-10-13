/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:49:11 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 15:42:31 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/* 
** int main()
** {
**    char s[] = "samet";
**
**    printf("%s",ft_strrchr(s,'m'));
** } 
*/

/*
** ft_strrchr works oppusite direction than ft_strchr .
** so ft_strrchr search matching char 'm' inside s string 
** and return met but when search ıt go from 
** end to start of s string.
 */