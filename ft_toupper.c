/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:41:39 by agina             #+#    #+#             */
/*   Updated: 2020/11/06 17:07:22 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int character)
{
	if (character >= 97 && character <= 122)
		return (character - 32);
	else if (character >= 65 && character <= 90)
		return (character);
	else
		return (0);
}
