/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 17:16:50 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*snap;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		snap = node->next;
		del (node->content);
		free (node);
		node = snap;
	}
	*lst = NULL;
}

/*
static void	free_all_lst(void *content)
{
	free (content);
}

int	main()
{
	t_list			*head;
	t_list			*p;
	unsigned int	head_i;

	head_i = 0;
	head = ft_lstnew (ft_strdup ("hallo\n"));
	while (head_i < 3)
	{
		ft_lstadd_back (&head, ft_lstnew (ft_strdup ("next\n")));
		head_i++;
	}
	ft_lstadd_back (&head, ft_lstnew (ft_strdup ("fin\n")));
	p = head;
	while (p != NULL)
	{
		ft_putstr_fd (p->content, 1);
		p = p->next;
	}
	ft_lstclear (&head, &free_all_lst);
	if (head == NULL)
		ft_putstr_fd ("pointer NULL\n", 1);
	return (0);
}
*/
