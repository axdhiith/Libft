/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:14:57 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/27 17:30:42 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total_words(char *str, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			num_words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (num_words);
}

static int	length(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*copyword(char *str, char c)
{
	int		word_length;
	int		i;
	char	*aword;

	i = 0;
	word_length = length(str, c);
	aword = (char *)malloc(sizeof(*str) * (word_length + 1));
	while (i < word_length)
	{
		aword[i] = *str;
		i++;
		str++;
	}
	aword[i] = '\0';
	return (aword);
}

char	**ft_split(char *str, char c)
{
	int		i;
	char	**words;
	int		tot_words;

	if (!str)
		return (0);
	tot_words = total_words(str, c);
	words = (char **)malloc(sizeof(str) * (tot_words + 1));
	if (!words)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			words[i] = copyword(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	words[i] = 0;
	return (words);
}
