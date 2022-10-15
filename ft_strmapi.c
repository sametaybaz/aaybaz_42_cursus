/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:57:08 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 17:58:19 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
** char my_func(unsigned int i, char str)
** {
**	printf("When turn while loop : index = %d and %c\n", i, str);
** 	return str - 32;
** }
**
** int main()
** {
**    char str[10] = "samet";
**    printf("Default state %s\n", str);
**    char *result = ft_strmapi(str, my_func);
**    printf("Modified state %s\n", result);
**    return 0;
** }  
*/

/* 
** ft_strmapi modify a sended string(s) each char(with while loop)
** with *f function and as return a new str(str). 
** before this we need create memory are this modified str. 
*/
