/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:48:04 by htorun            #+#    #+#             */
/*   Updated: 2025/06/04 02:55:36 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = num * 10 + nptr[i] - 48;
		i++;
	}
	return (sign * num);
}

int	main(void)
{
	printf("orignail: %d\n", atoi("2147483647214748364"));
	printf("	my:%d\n", ft_atoi("00000000000000000000000000"));
}
