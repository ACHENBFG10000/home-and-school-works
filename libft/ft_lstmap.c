/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 11:37:11 by achen             #+#    #+#             */
/*   Updated: 2026-11-13 11:37:11 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f (lst->content);
		new_node = ft_lstnew (new_content);
		if (!new_node)
		{
			del (new_content);
			ft_lstclear (&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back (&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdlib.h>

static void	free_content(void *content)
{
	free (content);
}

static void	*add(void *str)
{
	return (ft_strjoin (str, " hallo\n"));
}

int	main()
{
	t_list			*lst;
	t_list			*new_lst;
	t_list			*p;
	unsigned int	node_i;

	node_i = 0;
	lst = ft_lstnew ("start\n");
	while (node_i < 3)
	{
		ft_lstadd_back (&lst, ft_lstnew ("next\n"));
		node_i++;
	}
	ft_lstadd_back (&lst, ft_lstnew ("fin\n"));
	p = lst;
	while (p != NULL)
	{
		ft_putstr_fd (p->content, 1);
		p = p->next;
	}
	new_lst = ft_lstmap (lst, &add, &free_content);
	while (lst != NULL)
	{
		p = lst->next;
		free (lst);
		lst = p;
	}
	if (new_lst == NULL)
	{
		ft_putstr_fd ("the allocation fails\n", 1);
		return (0);
	}
	p = new_lst;
	while (p != NULL)
	{
		ft_putstr_fd (p->content, 1);
		p = p->next;
	}
	ft_lstclear (&new_lst, &free_content);
	if (lst == NULL)
		ft_putstr_fd ("pointer NULL\n", 1);
	return (0);
}
*/