/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:14:30 by agina             #+#    #+#             */
/*   Updated: 2020/11/19 20:32:46 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	ft_len(unsigned intnbr, int signlen)
{
	int			intlen;

	intlen = 1;
	while (intnbr /= 10)
		intlen++;
	return (intlen + signlen);
}

char	*ft_itoa(int n)
{
	char *str;
	int sign;
	int len;
	unsigned int num;

	num = n;
	if (n < 0)
	{
		sign = 1;
		num = n * -1;
	}
	else
		sign = 0;
	len = ft_len(num, sign);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	while (len >= sign)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	int i = 123;
	printf("%s", ft_itoa(i));
}
