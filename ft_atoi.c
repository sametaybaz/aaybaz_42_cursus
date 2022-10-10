/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:34:23 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/10 13:28:19 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\v' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * sign);
}

/*
// first while : to skip spaces areas
// first if : to set the mark ( + or - )
// second while : to convert to decimal system and return digit chars  .
// static keyword : ft_isspace func. just visible inside ft_atoi func.

// synopis : atoi digit chars convert to int with sign  

int main(void)
{
	char *s = "   -2147483647"; // output will be -2147483647
	printf("%d",ft_atoi(s));
	return (0);
}
*/