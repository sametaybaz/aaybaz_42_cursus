/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:16:43 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 14:26:52 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/* 
** int	main()
** {
**	char s1[] = "samet";
**	char set[] = "st"; 
**
**	printf("%s",ft_strtrim(s1,set));
** } 
*/

/* 
** first while trim leading matching (*s1 will point "ame")
** second while trim trailing matching (len will be 3 )
** memcpy fill for trimmed area by s1 and len so we return "ame"
*/
