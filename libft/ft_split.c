/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:31:44 by yozden            #+#    #+#             */
/*   Updated: 2023/07/15 14:31:46 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

unsigned int	wordcounter(const char *s, char delimiter)
{
	unsigned int	word;

	word = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			word++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**dest;
	unsigned int	lc;
	unsigned int	wc;

	dest = (char **)ft_calloc (wordcounter(s, c) + 1, sizeof(char *));
	if (!dest || !s)
		return (NULL);
	wc = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			lc = 0;
			while (*s && *s != c && ++lc)
				s++;
			dest[wc++] = (char *)ft_calloc(lc + 1, sizeof(char));
			if (!dest[wc - 1])
				return (ft_malloc_error(dest));
			ft_strlcpy(dest[wc - 1], s - lc, lc + 1);
		}
	}
	return (dest);
}
