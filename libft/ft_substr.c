/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:14:45 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 15:56:31 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;

	sub_str = (char *)malloc(len + 1);
	if (!s || !(sub_str))
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		sub_str[j] = s[i];
		i++;
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}

/* 
** int main()
** {   
**    char *sub_str;
**    char *sub_str_2;
**    sub_str = ft_substr("Samet Aybaz", 6, 5);
**    sub_str_2 = ft_substr("Samet", 2, 3);
**    printf("%s\n", sub_str);
**    printf("%s", sub_str_2);
**    return 0;
** } 
*/

/* 
** ft_substr : extract substring from string.
** sub_str = output Aybaz sub_str_2 = output met
** if condition :
** cheking string(s) doest exist or didnt allocated
** memory area for sub_str then return (NULL)

** while loop :
** (i) will be start indexing first element substr and (j) will 
** indexing as substr len and meanwhile it will copied sub_str
** from (s) and It will fill allocated area for sub_str. 
*/
