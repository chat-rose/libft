/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:29:15 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/01 15:37:02 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	global_count;

	global_count = count * size;
	ptr = malloc(global_count);
	if (!ptr)
		return (NULL);
	while (global_count > 0)
	{
		*((char *)ptr + global_count - 1) = '\0';
		global_count--;
	}
	return (ptr);
}
