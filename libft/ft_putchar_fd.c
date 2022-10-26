/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:26:02 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 17:21:36 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* 
** #include <stdio.h>
** #include <fcntl.h>
** int main()
** {		
**		int fd;
**		fd = open("deneme.txt",1);
**		ft_putchar_fd('a',fd);
**		printf("%d",fd);
** }  
** */

/* 
** It will write 'c' char to file descriptor.
*/
