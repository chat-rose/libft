/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:30:55 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/02 12:03:16 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*catstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	catstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!catstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		catstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		catstr[i + j] = s2[j];
		j++;
	}
	catstr[i + j] = '\0';
	return (catstr);
}
