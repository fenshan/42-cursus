/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:11:25 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/09 23:34:43 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//it is better to include the header but it is not necessary 
//because it is already added in the library
#include "libft.h"

int	main(int argc, char **argv)
{
	printf("%d\n", ft_isalpha(argv[1][0]));
	printf("%d\n", ft_isdigit(argv[1][1]));
	void *s = malloc (8 * 10);
	ft_memset(s, 'a', 10);
	printf("%s\n", s);
	return (0);
}
