/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:16:39 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 18:29:32 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	else
	{
		i = 0;
		while (*s1 != '\0' && *s2 != '\0' && i < n - 1)
		{
			if (*s1 != *s2)
				break ;
			s1++;
			s2++;
			i++;
		}
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
