/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wft_putendl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:10:58 by agina             #+#    #+#             */
/*   Updated: 2020/11/19 18:45:57 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
