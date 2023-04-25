/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:50:00 by alakshmi          #+#    #+#             */
/*   Updated: 2022/12/02 18:58:44 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[i] || (!str && len <= 0))
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (i + j < len))
		{
			if (!str[i + j] && !to_find[j])
				return ((char *)&str[i]);
			j++;
		}
		if (!to_find[j])
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
