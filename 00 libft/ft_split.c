/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:49:38 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/23 21:28:36 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	start_of_split(char const *s, size_t index, char c)
{
	return (s[index] != c && (!index || s[index - 1] == c));
}

static char	**allocate_array_str(char const *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (start_of_split(s, i, c))
			++n;
		++i;
	}
	return (malloc(sizeof(char *) * (n + 1)));
}

static char	*allocate_str(char const *s, char c, size_t *n)
{
	*n = 0;
	while (*s && *s != c)
	{
		*n += 1;
		++s;
	}
	return (malloc(sizeof(char) * (*n + 1)));
}

static char	**free_array_str(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	n;

	if (!s)
		return (NULL);
	result = allocate_array_str(s, c);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (start_of_split(s, i, c))
		{
			result[j] = allocate_str(s + i, c, &n);
			if (!result[j])
				return (free_array_str(result));
			ft_strlcpy(result[j++], s + i, n + 1);
		}
		++i;
	}
	result[j] = 0;
	return (result);
}
