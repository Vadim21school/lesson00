/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:24:18 by agina             #+#    #+#             */
/*   Updated: 2020/11/03 19:03:48 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascii(int per)
{
	if (per >= 0 && per <= 127)
		return (per);
	else
		return (0);
}
