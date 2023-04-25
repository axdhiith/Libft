/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:58:35 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/28 12:53:54 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int asc)
{
	if (asc >= 'a' && asc <= 'z')
		asc -= 32;
	return (asc);
}