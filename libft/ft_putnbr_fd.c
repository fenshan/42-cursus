/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:15:19 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/24 00:29:32 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	put_abs_digit(int n, int fd)
{
	char	c;

	if (n < 0)
		c = (n * -1) + '0';
	else
		c = n + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		write(fd, "-", 1);
	put_abs_digit(n % 10, fd);
}
