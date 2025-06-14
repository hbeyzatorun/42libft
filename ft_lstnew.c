/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 01:00:15 by htorun            #+#    #+#             */
/*   Updated: 2025/06/14 01:48:28 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return(node);
		
}
#include <stdio.h>
int	main()
{
	t_list *a;

	a = ft_lstnew(ft_strdup("beyza"));
	printf("%s\n",(char *)a -> content);
}
