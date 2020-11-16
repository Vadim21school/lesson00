/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:30:53 by agina             #+#    #+#             */
/*   Updated: 2020/11/16 18:52:29 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t t;

	i = 0;
	if (*str2 == '\0')
		return ((char*)str1);
	while (str1[i] && i < len)
	{
		t = 0;
		while (str1[i + t] && i + t < len && str2[t] && str1[i + t] == str2[t])
			t++;
		if (str2[t] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (NULL);
}
