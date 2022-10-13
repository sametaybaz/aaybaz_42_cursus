/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:26:02 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 14:37:08 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* 
** int main()
** {
**    char letter = 'c';
**    ft_putchar_fd(letter,1);
**    return (0);
** } 
*/
/* 
** It will write 'c' char to file descriptor.
*/
