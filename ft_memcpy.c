/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 02:02:42 by htorun            #+#    #+#             */
/*   Updated: 2025/06/10 15:28:30 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
