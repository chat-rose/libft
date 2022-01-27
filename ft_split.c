/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:24:57 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/01 14:13:36 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_wc(char *s, char c)
{
	size_t	wc;

	wc = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			wc++;
		}
	}
	return (wc);
}

static char	*ft_sbstr_mallocopy(char const *s, char c, size_t *starter)
{
	char	*sbstr;
	size_t	i;

	while (s[*starter] && s[*starter] == c)
		*starter += 1;
	i = 0;
	while (s[*starter + i] && s[*starter + i] != c)
		i++;
	sbstr = malloc(sizeof(char) * (i + 1));
	if (!sbstr)
		return (NULL);
	i = 0;
	while (s[*starter] && s[*starter] != c)
	{
		sbstr[i] = s[*starter];
		*starter += 1;
		i++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}

static void	ft_free(char **tab, size_t i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wc;
	size_t	starter;
	size_t	i;

	i = 0;
	starter = 0;
	wc = ft_wc((char *)s, c);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	while (i < wc)
	{
		tab[i] = ft_sbstr_mallocopy(s, c, &starter);
		if (tab[i] == NULL)
		{
			ft_free(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
