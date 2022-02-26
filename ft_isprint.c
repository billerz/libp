/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:24:16 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 10:33:34 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 040 && c <= 0176)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;
	
	test1 = '%';
	test2 = '*';
	test3 = '=';
	test4 = 020;
	printf("test1 : %d, %d\n", ft_isprint(test1), isprint(test1));
	printf("test2 : %d, %d\n", ft_isprint(test2), isprint(test2));
	printf("test3 : %d, %d\n", ft_isprint(test3), isprint(test3));
	printf("test4 : %d, %d\n", ft_isprint(test4), isprint(test4));
	return (0);
}*/
