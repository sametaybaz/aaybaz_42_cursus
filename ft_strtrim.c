/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:16:43 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/10 18:32:00 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 != '\0' && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len != 0 && s1[len - 1] != '\0' && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	result = (char *)malloc(sizeof(len + 1));
	if (!(result))
		return (0);
	ft_memcpy(result, s1, len);
	result[len] = '\0';
	return (result);
}
/*
int	main()
{
	char s1[] = "samet";
	char set[] = "st"; // output will be ame 

	printf("%s",ft_strtrim(s1,set));
}
** first while trim leading matching (*s1 will point "ame")
** second while trim trailing matching (len will be 3 )
** memcpy fill for trimmed area by s1 and len
*/