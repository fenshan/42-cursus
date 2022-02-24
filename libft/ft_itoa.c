/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:47:39 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/24 00:08:51 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static size_t	n_str_size(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
		++size;
	while (n / 10)
	{
		++size;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = malloc(sizeof(*s) * (n_str_size(n) + 1));
	if (!s)
		return (NULL);
	if (!n)
		s[0] = '0';
	else if (n < 0)
		s[0] = '-';
	i = n_str_size(n);
	s[i--] = '\0';
	while (n)
	{
		s[i--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (s);
}
