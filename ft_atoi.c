/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:27:26 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/19 13:50:28 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	oper;
	int	num;

	oper = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			oper = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num = num + *str - '0';
		str++;
	}
	return (num * oper);
}
/*
int	main(void)
{
	char	str1[50] = "      589sleigps  ";
	char	str2[50] = "          -2378sk3948";
	char	str3[50] = "kl4240";

	printf("Atoi (str1) : %d, ft_atoi : %d\n", atoi(str1), ft_atoi(str1));
	printf("Atoi (str2) : %d, ft_atoi : %d\n", atoi(str2), ft_atoi(str2));
	printf("Atoi (str3) : %d, ft_atoi : %d\n", atoi(str3), ft_atoi(str3));
	return (0);
}*/
