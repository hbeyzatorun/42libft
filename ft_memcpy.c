/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 02:02:42 by htorun            #+#    #+#             */
/*   Updated: 2025/05/30 02:39:08 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*ptr;
	unsigned char	*dptr;

	dptr = dest;
	ptr = src;
	while (n--)
		*dptr++ = *ptr++;
	return (dest);
}

int	main(void)
{
	const char *ptr = "selamnaber&yok";
	char dest[42];
	ft_memset(dest, '\0', 42);
	ft_memcpy(dest, ptr, 42);
	printf("%s", dest);
	return (0);
}