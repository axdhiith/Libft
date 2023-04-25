/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:32:13 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/28 11:50:08 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int asc)
{
	if ((asc >= 'A' && asc <= 'Z') || (asc >= 'a' && asc <= 'z')
		|| (asc >= '0' && asc <= '9'))
		return (1);
	return (0);
}