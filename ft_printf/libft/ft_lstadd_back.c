/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 14:30:01 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast (*lst);
	last->next = new;
}

/*
#include <stdlib.h>
#include <unistd.h>

static void	free_all_lst(t_list *head)
{
	t_list	*p;

	while (head->next != NULL)
	{
		p = head->next;
		free (head);
		head = p;
	}
	free (head);
}

int	main()
{
	t_list			*head;
	t_list			*p;
	unsigned int	head_i;

	head_i = 0;
	head = ft_lstnew ("hallo");
	while (head_i < 6)
	{
		ft_lstadd_back (&head, ft_lstnew (" world\n"));
		head_i++;
	}
	ft_lstadd_back (&head, ft_lstnew ("last"));
	p = head;
	while (p != NULL)
	{
		ft_putstr_fd (p->content, 1);
		p = p->next;
	}
	free_all_lst (head);
	return (0);
}
*/
