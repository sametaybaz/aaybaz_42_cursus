/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:44:19 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/15 17:53:07 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	ft_len(int n)
{
	long	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static	int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	number;
	long	len;
	char	*str;

	number = n;
	len = ft_len(number);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	len--;
	if (number < 0)
		number = -number;
	while (len >= 0)
	{
		str[len] = (number % 10) + '0';
		len--;
		number = number / 10;
	}
	if (ft_sign(n))
		str[0] = '-';
	return (str);
}

/* int main()
{
    int n = 12;
    int n1 = -12;
    int n2 = 0;
    printf("%s\n",ft_itoa(n)); 
    printf("%s\n",ft_itoa(n1)); 
    printf("%s",ft_itoa(n2)); 
} */

/* 
** The itoa() function coverts the integer n into 
** a character string.
**
** ft_sizen : defined size of n (digit size) 
** first while : convert to ascii chars from decimal
** first if : for int = 0 
** second if : defined sign negative integers 
*/
