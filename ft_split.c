/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:36:07 by htorun            #+#    #+#             */
/*   Updated: 2025/06/13 09:31:46 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
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

static int	ft_wlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static void	*error_handling(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		len;

	if (!s)
		return (NULL);
	result = ft_calloc((counter(s, c) + 1), sizeof(char *));
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
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (error_handling(result, i));
			i++;
			s += len;
		}
	}
	return (result);
}
