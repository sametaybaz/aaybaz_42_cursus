/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:47:10 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 17:22:08 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/* 
** #include <stdio.h>
** #include <fcntl.h>
** int main()
** {		
**		int fd;
**		fd = open("deneme2.txt",1);
**		ft_putstr_fd("samet",fd);
**		printf("%d",fd);
** }  
** */

/* 
** It will write "samet" string to file descriptor.
*/
