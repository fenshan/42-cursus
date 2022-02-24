/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:55:56 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/14 16:22:53 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
		*(char *)(ptr + i++) = '\0';
	return (ptr);
}
