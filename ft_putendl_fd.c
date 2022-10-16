/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:56:43 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/16 20:12:46 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* 
** #include <stdio.h>
** #include <fcntl.h>
** int main()
** {	
**		int fd ;
**		fd = open("deneme4.txt", 1);
**		char k[] =  "Samet Aybaz";
**		ft_putendl_fd(k, fd);
** } 
*/