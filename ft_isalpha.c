/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:46:08 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 13:48:15 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/*
** int main()
** {
**    printf("%d",ft_isalpha(4));
**    printf("\n%d",ft_isalpha('4'));
**    printf("\n%d",ft_isalpha('a'));
**    printf("\n%d",ft_isalpha('A'));
** }
*/