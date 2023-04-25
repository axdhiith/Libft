/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:46:28 by alakshmi          #+#    #+#             */
/*   Updated: 2022/12/02 16:28:51 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	checkspace(const char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		neg;
	size_t	i;
	long	nb;
	long	oldres;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] && (checkspace(str[i]) == 1))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		neg = 1 - 2 * (str[i++] == '-');
	while (str[i] && ft_isdigit(str[i]))
	{
		oldres = nb;
		nb = (nb * 10) + (str[i++] - 48);
		if (oldres > nb)
		{
			if (neg == 1)
				return (-1);
			return (0);
		}
	}
	return (nb * neg);
}
