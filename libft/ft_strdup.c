/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:32:56 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:59:40 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cstr;

	cstr = (char *)malloc(ft_strlen(str) + 1);
	if (!(cstr))
		return (0);
	ft_memcpy(cstr, str, ft_strlen(str) + 1);
	return (cstr);
}

/* 
** int main()
** {
**    const char str[] = "samet";
**    char *cstr = ft_strdup(str);
**
**    printf("%s",cstr);
**
**    return (0);
** } 
*/

/* 
** Allocated memory area for cstr(copystr) as size of str(src str)
** after This Allocated area is filled with str copied from str . 
**  ft_strlen(str) + 1 ; +1 for fill null char 
*/
