/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:26:43 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/26 14:19:43 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*((char *)b + i) = (char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	str1[50] = "Hello!!!!!";
	char	str2[50] = "Hello!!!!!";

	printf("Original : %s\n", str1);
	memset(str1 + 5, '?', 3 * sizeof(char));
	printf("After memset : %s\n", str1);
	ft_memset(str2 + 5, '?', 3 * sizeof(char));
	printf("After ft_memset : %s\n", str2);
	return (0);
}*/
