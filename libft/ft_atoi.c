/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:34:23 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 20:52:13 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	tmp;

	i = 0;
	a = 1;
	tmp = 0;
	while (str[i] == ' ' || (str[i] <= '\r' && str[i] >= '\t'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = tmp * 10 + str[i] - 48;
		i++;
	}
	return (tmp * a);
}

/* 
** int main(void)
** {
**	char *s = "   -2147483647"; // output will be -2147483647
**	printf("%d",ft_atoi(s));
**	return (0);
** 
** } 
*/

/* 
** first while : to skip spaces areas
** first if : to set the mark ( + or - )
** second while : to convert to decimal system and return digit chars  .

** synopis : atoi digit chars convert to int with sign   
*/
