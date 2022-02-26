/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:10:18 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/22 15:59:07 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[20] = "";
	char	str3[20] = "        Hello";
	char	chr;

	chr = 'l';

	printf("%s, %s\n", ft_strchr(str1, chr), strchr(str1, chr));
	printf("%p, %p\n", ft_strchr(str1, chr), strchr(str1, chr));
	printf("%s, %s\n", ft_strchr(str2, chr), strchr(str2, chr));
	printf("%p, %p\n", ft_strchr(str2, chr), strchr(str2, chr));
	printf("%s, %s\n", ft_strchr(str3, chr), strchr(str3, chr));
	printf("%p, %p\n", ft_strchr(str3, chr), strchr(str3, chr));
	return (0);
}*/
