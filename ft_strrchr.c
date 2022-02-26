/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:10:18 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/22 14:43:11 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		strlen;
	char	*str;

	str = (char *)s;
	strlen = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return (&str[strlen]);
	else
	{
		i = strlen - 1;
		while (i >= 0)
		{
			if (str[i] == (char)c)
				return (&str[i]);
			i--;
		}
		return (NULL);
	}
}
/*
int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[20] = "";
	char	str3[20] = "        Hello";
	char	chr;

	chr = 'l';

	printf("%s, %s\n", ft_strrchr(str1, chr), strrchr(str1, chr));
	printf("%p, %p\n", ft_strrchr(str1, chr), strrchr(str1, chr));
	printf("%s, %s\n", ft_strrchr(str2, chr), strrchr(str2, chr));
	printf("%p, %p\n", ft_strrchr(str2, chr), strrchr(str2, chr));
	printf("%s, %s\n", ft_strrchr(str3, chr), strrchr(str3, chr));
	printf("%p, %p\n", ft_strrchr(str3, chr), strrchr(str3, chr));
	return (0);
}*/
