/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:56:30 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/02 15:00:33 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_atoi(const char *nptr)
{
	size_t			i;
	int				sign;
	unsigned int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\r' || nptr[i] == '\v'
			|| nptr[i] == '\f'))
		i++;
	if (nptr[i] && nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (nptr[i] && nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return ((int)(sign * nbr));
}
