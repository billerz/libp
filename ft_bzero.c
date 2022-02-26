/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:33:20 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 10:34:48 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str1[20] = "abcdefghijklmn";
	char	str2[20] = "abcdefghijklmn";
	int	i;

	bzero(str1 + 3, 5);
	printf("bzero : %s\n", str1);
	i = 0;
	while (i < 14)
	{
		printf("%c ", str1[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str2 + 3, 5);
	printf("ft_bzero : %s\n", str2);
	i = 0;
	while (i < 14)
	{
		printf("%c ", str2[i]);
		i++;
	}
	return (0);
}*/
