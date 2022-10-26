/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:46:46 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 13:47:51 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*
** int main() 
** {
**    printf("%d",ft_isalnum('a'));
**    printf("\n%d",ft_isalnum('2'));
**    printf("\n%d",ft_isalnum('A'));
**    printf("\n%d",ft_isalnum(2));
** }
*/