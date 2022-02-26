/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:15:56 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/20 21:31:58 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*num;
	int			i;
	int			len;

	nb = n;
	len = count_nbr(nb);
	num = (char *)malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	i = len - 1;
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		num[0] = '0';
	while (nb > 0)
	{
		num[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	num[len] = '\0';
	return (num);
}
/*
int	main(void)
{
	int	nb;

	nb = -2485489;
	//printf("%d\n", count_nbr(nb));
	printf("%s\n", ft_itoa(nb));
	return (0);
}

*/
