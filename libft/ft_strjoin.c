/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:42:36 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/23 19:39:33 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (len1 + len2 + 1));
	if (strjoin == NULL)
		return (NULL);
	ft_memcpy(strjoin, s1, len1);
	ft_strlcpy(strjoin + len1, s2, len2 + 1);
	return (strjoin);
}
