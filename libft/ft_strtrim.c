/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:06:21 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/23 21:31:45 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_to_trim_left(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		++i;
	return (i);
}

static size_t	ft_to_trim_right(char const *s, char const *set)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && ft_strchr(set, s[i]))
		--i;
	return (ft_strlen(s) - i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	trimleft;
	size_t	trimright;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	trimleft = ft_to_trim_left(s1, set);
	if (trimleft >= ft_strlen(s1))
		trimright = 0;
	else
		trimright = ft_to_trim_right(s1, set);
	len = ft_strlen(s1) - trimleft - trimright + 1;
	strtrim = malloc (sizeof(char) * len);
	if (!strtrim)
		return (NULL);
	ft_memcpy(strtrim, s1 + trimleft, len);
	strtrim[len - 1] = '\0';
	return (strtrim);
}
