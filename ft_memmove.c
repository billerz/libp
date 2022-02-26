/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:24:21 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 15:38:35 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	lens;

	lens = (int)len;
	if (!dst || !src)
		return (NULL);
	if (src < dst)
	{
		i = lens - 1;
		while (i >= 0)
		{
			*((char *)dst + i) = *((char *)src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < lens)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	src1[50] = "lorem ipsum dolor sit amet";
	char	*dest1;
	char	src2[50] = "lorem ipsum dolor sit amet";
	char	*dest2;
	size_t	len;

	dest1 = src1 + 1;
	dest2 = src2 + 1;
	len = 8;
	printf("dest : %s, len = %lu\n", dest1, strlen(dest1));
	printf("src  : %s, len = %lu\n", src1, strlen(src1));
	memmove(dest1, src1, len);
	printf("After memmove: %s\n", dest1);
	ft_memmove(dest2, src2,len);
	printf("After ft_memmove: %s\n", dest2);
	return (0);
}*/
