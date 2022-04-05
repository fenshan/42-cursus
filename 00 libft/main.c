/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:11:25 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/13 21:10:20 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
	
	ft_bzero(s, 10);
	printf("%s\n", s);

	char *s1 = malloc (sizeof(char) * 10);
	s1 = "abcdefghi";
	//printf("memcpy: %s\n", memcpy(s1 , "yyasdf", 4));
	s1 = "abcdefghi";
	//printf("ft_memcpy: %s\n", ft_memcpy(s1 + 4, s1, 4));

	s1 = "abcdefghi";
	//printf("memmove: %s\n", memmove(s1 + 4, s1, 4));
	s1 = "abcdefghi";
	//printf("ft_memmove: %s\n", ft_memmove(s1 + 4, s1, 4));

		return (0);
}
