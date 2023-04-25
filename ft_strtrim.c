/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:10:37 by alakshmi          #+#    #+#             */
/*   Updated: 2022/12/02 18:46:31 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	tlen;
	char	*ptr;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	tlen = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (tlen > i && ft_strchr(set, s1[tlen]))
		tlen--;
	ptr = (char *)malloc(sizeof(char) * (tlen - i + 2));
	if (!ptr)
		return (0);
	j = 0;
	while (i <= tlen)
		ptr[j++] = s1[i++];
	ptr[j] = '\0';
	return (ptr);
}
