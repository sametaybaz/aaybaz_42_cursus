/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:06:54 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 22:17:40 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* 
** 
** void my_func(unsigned int i, char *str)
** {	
**	printf("address is point: index = %d and the string is %s\n", i, str);
** }
**
**  int main()
** {
**		char str[] = "samet";
**		ft_striteri(str, my_func);
**		return 0;
** }  
*/

/* 
** f function take an as addressi each charcter from s (string)
** by indexing for modify but doest retun anything. so ;
** each char is turning of str and appliying f function.
*/
