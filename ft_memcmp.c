/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:55:52 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 14:10:00 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*((char *)s1 + i) != *((char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[50] = "abcdefg";
	const char	s2[50] = "abcdefg";
	const char	s3[50] = "abcDEfg";

	printf("compare s1-s2 w/ memcmp: %d\n", memcmp(s1, s2, 7));
	printf("compare s1-s2 w/ ft_memcmp: %d\n", ft_memcmp(s1, s2, 7));
	printf("compare s1-s3 w/ memcmp: %d\n", memcmp(s1, s3, 5));
	printf("compare s1-s3 w/ ft_memcmp: %d\n", ft_memcmp(s1, s3, 5));
	return (0);
}
*/
