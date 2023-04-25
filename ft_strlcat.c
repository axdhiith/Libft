/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:31:24 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/28 12:42:31 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	ssize;
	size_t	dsize;
	size_t	i;

	ssize = 0;
	dsize = 0;
	ssize = ft_strlen(src);
	if (dstsize == 0)
		return (ssize);
	while (dsize < dstsize && dest[dsize])
		dsize++;
	if (dstsize <= dsize)
		return (dstsize + ssize);
	i = 0;
	while (dstsize && (--dstsize - dsize) && src[i])
	{
		dest[dsize + i] = src[i];
		i++;
	}
	dest[dsize + i] = '\0';
	return (ssize + dsize);
}
