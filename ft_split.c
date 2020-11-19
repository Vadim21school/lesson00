/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:43:00 by agina             #+#    #+#             */
/*   Updated: 2020/11/19 17:36:35 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char				**ft_clear_splitted(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return ((char*)str + i);
		i++;
	}
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

static unsigned int	ft_get_nb_strs(char const *s, const char *delimiters)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && ft_strchr(delimiters, s[i]))
		i++;
	while (s[i])
	{
		if (ft_strchr(delimiters, s[i]))
		{
			nb_strs++;
			while (s[i] && ft_strchr(delimiters, s[i]))
				i++;
			continue ;
		}
		i++;
	}
	if (!ft_strchr(delimiters, s[i - 1]))
		nb_strs++;
	return (nb_strs);
}

static void			ft_get_next_str(char **next_str, unsigned int *next_str_len,
					const char *delimiters)
{
	unsigned int i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && ft_strchr(delimiters, **next_str))
		(*next_str)++;
	while ((*next_str)[i])
	{
		if (ft_strchr(delimiters, (*next_str)[i]))
			return ;
		(*next_str_len)++;
		i++;
	}
}

char				**ft_split(char const *s, const char *delimiters)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	nb_strs = ft_get_nb_strs(s, delimiters);
	if (!(tab = malloc(sizeof(char *) * (nb_strs + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, delimiters);
		if (!(tab[i] = malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_clear_splitted(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int				main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split(", hello, sp    lit ,,,,  th,,,is,plz, , ", ", ");
	printf("%s", *tab);
}
