/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:59:23 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/28 12:53:46 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int asc)
{
	if (asc >= 'A' && asc <= 'Z')
		asc += 32;
	return (asc);
}