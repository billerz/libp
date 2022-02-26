/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:02:57 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 17:24:39 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	j = destlen;
	if (dstsize - 1 > destlen && dstsize > 0)
	{
		while (destlen + i < dstsize - 1 && src[i])
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (destlen >= dstsize)
		destlen = dstsize;
	return (destlen + srclen);
}
/*
int	main(void)
{
	char	src1[50] = "abcdefghijklmnopqrstu";
	char	dest1[50] = "xxxxx";
	char	src2[50] = "abcdefghijklmnopqrstu";
	char	dest2[50] = "xxxxx";

	printf("strlcat : %lu, %s\n", strlcat(dest1, src1, 40), dest1);
	printf("ft_strlcat : %lu, %s\n", ft_strlcat(dest2, src2, 40), dest2);
	return (0);
}*/
