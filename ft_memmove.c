/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:37:52 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/27 17:24:17 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (!dst && !src)
		return (dst);
	cdst = (unsigned char *)(dst);
	csrc = (unsigned char *)(src);
	if (dst > src)
	{
		while (len > 0)
		{
			*(cdst + len - 1) = *(csrc + len - 1);
			len--;
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			*(cdst++) = *(csrc++);
	}
	return (dst);
}
