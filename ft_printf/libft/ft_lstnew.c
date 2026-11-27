/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 11:19:59 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[6] = "hallo";
	char	str2[7] = " world";
	t_list	*p;
	t_list	*p1;

	p = ft_lstnew (str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	p1 = ft_lstnew (str2);
	ft_putstr_fd ((char *)p->content, 1);
	ft_putstr_fd ((char *)p1->content, 1);
	free (p);
	free (p1);
	return (0);
}
*/
