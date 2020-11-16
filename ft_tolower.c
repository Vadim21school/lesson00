/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:58:50 by agina             #+#    #+#             */
/*   Updated: 2020/11/06 17:14:53 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int character)
{
	if (character >= 48 && character <= 57)
		return (character + 32);
	else if (character >= 97 && character <= 122)
		return (character);
	else
		return (0);
}
