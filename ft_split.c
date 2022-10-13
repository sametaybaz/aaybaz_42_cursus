/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:43:55 by aaybaz            #+#    #+#             */
/*   Updated: 2022/10/13 20:39:17 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**splited;
	size_t	s_len;

	s_len	= ft_strlen(s);
	splited = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(splited))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= s_len)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == s_len) && index >= 0)
		{
			splited[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	splited[j] = 0;
	return (splited);
}

int main()
{
        char str[] = "samet.aybaz";
        char **a = ft_split(str,'.');
        
        printf("%s\n",a[0]);
        printf("%s\n",a[1]);
}
