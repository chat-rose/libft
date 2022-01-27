/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:40:02 by jschapin          #+#    #+#             */
/*   Updated: 2021/11/30 18:43:49 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	un;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		un = -n;
	}
	else
		un = n;
	if (un > 9)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putnbr_fd(un % 10, fd);
	}
	else
	{
		c = un + '0';
		write(fd, &c, 1);
	}
}
