/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:50:16 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/23 21:29:56 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//returns 0 if min is lower than 0
static size_t	ft_min(int a, int b)
{
	if (a < 0 || b < 0)
		return (0);
	else if (a <= b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	len = ft_min(len, (int)ft_strlen(s) - start) + 1;
	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_strlcpy(substr, "", len);
	else
		ft_strlcpy(substr, s + start, len);
	return (substr);
}
