/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:16:29 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/01 15:22:21 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*uc_dst;

	if (dst == src)
		return (dst);
	uc_dst = (unsigned char *)dst;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(uc_dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		i = 1;
		while (i <= len)
		{
			*(uc_dst + len - i) = *((unsigned char *)src + len - i);
			i++;
		}
	}
	return (dst);
}
