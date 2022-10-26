/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:11:49 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 16:02:03 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 'A' - 'a');
	else
		return (c);
}

/* 
** int main()
** {
**    char c = 'a';
**    char c_1 = 'b';
**    printf("%d",ft_toupper(c));
**    printf("\n%d",ft_toupper(c_1));
** } 
*/

/* 
** if type 'a' it will return 65 so this equal this ascii 'A'
** so return ('a'(97) + 'A'(65) - 'a'(97) ) = 'A'  = 65

** if type 'b it will return ;
** return ('b'(98) + 'A'(65) - 'a'(97) ) = 'B'  = 66 
*/
