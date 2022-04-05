/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:25:43 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/22 18:33:55 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = -1;
	while ((size_t)++i < n && s1[i] && s2[i])
		if (s1[i] != s2[i])
			return ((UC)s1[i] - (UC)s2[i]);
	if (i >= (int)n)
		return (0);
	return ((UC)s1[i] - (UC)s2[i]);
}
