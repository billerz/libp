/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboonint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:15:34 by sboonint          #+#    #+#             */
/*   Updated: 2022/02/26 18:38:31 by sboonint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i])
		i++;
	return (i);
}

static int	count_word(const char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == sep && *str)
			str++;
		if (*str != sep && *str)
			count++;
		while (*str != sep && *str)
			str++;
	}
	return (count);
}

static char	*put_word(const char *str, int len, char sep)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*str && *str != sep)
		word[i++] = *str++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		wcount;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	wcount = count_word(s, c);
	strings = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!strings)
		return (NULL);
		i = 0;
	while (i < wcount)
	{
		while (*s && *s == c)
			s++;
		len = words_len(s, c);
		strings[i] = put_word(s, len, c);
		while (*s && *s != c)
			s++;
		i++;
	}
	strings[i] = 0;
	return (strings);
}
