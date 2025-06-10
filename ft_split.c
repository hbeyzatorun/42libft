/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:36:07 by htorun            #+#    #+#             */
/*   Updated: 2025/06/10 15:37:14 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
		{
			word = 0;
		}
		s++;
	}
	return (count);
}

int	ft_wlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	int		i;
	char	**result;
	int		len;
	int		j;

	if (!s)
		return (NULL);
	wordcount = counter(s, c);
	result = malloc(sizeof(char *) * (wordcount + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_wlen(s, c);
			result[i] = malloc(len + 1);
			j = 0;
			while (j < len)
			{
				result[i][j] = s[j];
				j++;
			}
			result[i][len] = '\0';
			i++;
			s += len;
		}
	}
	result[i] = NULL;
	return (result);
}
