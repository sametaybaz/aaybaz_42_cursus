/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:12:54 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 17:37:27 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = (unsigned int)(n * -1);
	}
	else
		un = (unsigned int)n;
	if (un >= 10)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putchar_fd(un % 10 + '0', fd);
	}
	else
		ft_putchar_fd(un + '0', fd);
}

/* 
** #include <stdio.h>
** #include <fcntl.h>
**
** int main()
** {
**   	int n = 2147483647;
**   	int n1 = -2147483647;
**	int fd;
**	fd = open("deneme3.txt",1);
**	printf("%d",fd);
**  	ft_putnbr_fd(n,fd);
**	ft_putnbr_fd(n1,fd);
** }  
*/

/* 
** write to file descriptor value of output integer (n)
** unsigned int : convert to positive value for write as char to file descriptor.
** because ascii table has positive decimal values for each char digit

** ft_putnbr_fd(un / 10, fd) : to reduce the number. (with recursive func.)
** un % 10 + '0', fd  : to convert the last digit of a number to char.
** + '0' : for convert to char  
*/
