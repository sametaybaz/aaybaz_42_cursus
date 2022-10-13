/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:25:22 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 13:48:54 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
** int main()
** {
**	printf("%d",ft_isascii('3'));
**	printf("\n%d",ft_isascii(2));
**	printf("\n%d",ft_isascii('a'));
**	printf("\n%d",ft_isascii(' '));
** }
*/