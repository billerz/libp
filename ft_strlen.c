/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:48:00 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 10:20:45 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[50] = "hello!!!!!";
	
	printf("string : %s\n", str);
	printf("ft_strlen : %d\n", ft_strlen(str));
	printf("strlen : %lu\n", strlen(str));
	return (0);
}*/
