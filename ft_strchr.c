/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:31 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:51:02 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/* 
** int main()
** {
**    char s[] = "samet";
**
**    printf("%s",ft_strchr(s,'m'));
** } 
*/

/* 
** ft_strchr search(by indexing) match 'm' char inside s array   
** with while loop and if conditioun,if it find match after    
** it will return chars rest of m with m so return met .
** synopis : ft_strchr: find match char inside str and return rest of. 
*/