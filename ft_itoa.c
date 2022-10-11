/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:44:19 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/11 11:44:19 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_sizen(int n,size_t size)
{
    while (n != 0)
	{
		n = n / 10;
		size++;
	}
    return size;
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
    size = ft_sizen(n,size);
    str = (char *)malloc(size + 1);
	if (!(str))
		return (NULL);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
/*
int main()
{
    int n = 12;
    int n1 = -12;
    int n2 = 0;

    printf("%s\n",ft_itoa(n)); 
    printf("%s\n",ft_itoa(n1)); 
    printf("%s",ft_itoa(n2)); 
}

** The itoa() function coverts the integer n into 
** a character string.

** ft_sizen : defined size of n (digit size) 
** first while : convert to ascii chars from decimal
** first if : for int = 0 
** second if : defined sign negative integers
*/