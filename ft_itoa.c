/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:00:59 by alakshmi          #+#    #+#             */
/*   Updated: 2022/12/02 16:34:18 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	*retptr(char *ptr, long num, int tlen)
{
	ptr[tlen--] = '\0';
	if (num == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (num < 0)
	{
		num *= -1;
		ptr[0] = '-';
	}
	while (num > 0)
	{
		ptr[tlen--] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	num;
	int		tlen;
	char	*ptr;

	num = n;
	tlen = nlen(num);
	ptr = (char *)malloc(sizeof(char) * (tlen + 1));
	if (!ptr)
		return (NULL);
	retptr(ptr, num, tlen);
	return (ptr);
}
