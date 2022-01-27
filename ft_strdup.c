/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:05:00 by jschapin          #+#    #+#             */
/*   Updated: 2021/11/30 15:49:54 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strcpy;
	size_t	i;

	strcpy = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!strcpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strcpy[i] = s[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
