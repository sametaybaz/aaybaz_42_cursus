/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:17:53 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 15:22:57 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find_substr, size_t len)
{
	size_t		substr_len;

	if (*find_substr == '\0')
		return ((char *)str);
	substr_len = ft_strlen((char *)find_substr);
	while (*str != '\0' && len >= substr_len)
	{
		if (*str == *find_substr
			&& ft_memcmp(str, find_substr, substr_len) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}

/*
** int main()
** {
**    char str[] = "samet";
**
**    printf("%s\n",ft_strnstr(str,"",5));
**    printf("%s",ft_strnstr(str,"met",5));
** }
*/

/*
** find a substring inside a string .
** str = scan string 
** "met" = to find substring inside str.
** "5" = substring end of position len(size) inside string 
** len >= substr_len : It will limited scan str pointer matching 
** substr first character .
*/
