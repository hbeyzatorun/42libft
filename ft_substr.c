/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:45:36 by htorun            #+#    #+#             */
/*   Updated: 2025/06/13 08:28:12 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_fillstr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
	{
		return (0);
	}
	if (len > str_len - start)
		return (str_len - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	copy_len;

	i = 0;
	if (!s)
		return (NULL);
	copy_len = ft_fillstr(s, start, len);
	str = (char *)malloc(copy_len + 1);
	if (!str)
		return (NULL);
	while (i < copy_len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
