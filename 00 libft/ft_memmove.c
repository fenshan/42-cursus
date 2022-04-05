/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:35:09 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/16 20:37:49 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*pd;

	pd = dst;
	if (!dst && !src)
		return (pd);
	else if (src > dst)
		while (len--)
			*(UC *)dst++ = *(UC *)src++;
	else
	{
		dst += len;
		src += len;
		while (len--)
			*(UC *)--dst = *(UC *)--src;
	}
	return (pd);
}
