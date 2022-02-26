/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:21:35 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 14:11:40 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char	src1[50] = "abcdef.hijklmn.opqrs";
	char	dest1[50];
	const char	src2[50] = "abcdef.hijklmn.opqrs";
	char	dest2[50];

	strcpy(dest1, "Hello");
	printf("Before memcpy dest : %s\n", dest1);
	memcpy(dest1, src1, 7);
	printf("After memcpy dest : %s\n", dest1);
	strcpy(dest2, "Hello");
	printf("Before ft_memcpy dest : %s\n", dest2);
	ft_memcpy(dest2, src2, 7);
	printf("After ft_memcpy dest : %s\n", dest2);
	return (0);
}*/
