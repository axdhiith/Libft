/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:00:29 by alakshmi          #+#    #+#             */
/*   Updated: 2022/12/02 18:59:52 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ext_ascii_conv;

	ext_ascii_conv = c;
	c = ext_ascii_conv;
	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (!((char)c) || s[i] == c)
		return ((char *)(s + i));
	return (0);
}
