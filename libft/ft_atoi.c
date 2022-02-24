/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:30:47 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/24 22:22:55 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		++str;
	n = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += ((*str - '0') * sign);
		++str;
	}
	return (n);
}

//[KO]: your atoi does not work with over long max value
//[KO]: your atoi does not work with over long min value
