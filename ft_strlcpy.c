/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:35:11 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 17:30:28 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src1[50] = "abcdefghijklmnopqrstu";
	char	dest1[50] = "xxxxxxxxxxxxxxx";
	char	src2[50] = "abcdefghijklmnopqrstu";
	char	dest2[50] = "xxxxxxxxxxxxxxx";
	
	printf("strlcpy : %s, srclength = %lu\n", dest1, strlcpy(dest1, src1, 5));
	printf("ft_strlcpy: %s, srclength = %lu\n", dest2, ft_strlcpy(dest2, src2, 5));
	return (0);
}*/
