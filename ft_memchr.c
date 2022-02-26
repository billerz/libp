/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:58:24 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 14:04:11 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[50] = "Hello!!!!!";
	char	str2[50] = "Hello!!!!!";
	char	c;

	c = '!';
	printf("After memchr : %s\n", memchr(str1, c, strlen(str1)));
	printf("After ft_memchr : %s\n", ft_memchr(str2, c, strlen(str2)));
	return (0);
}*/
