/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 13:30:34 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
#include <stdlib.h>

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
	unsigned int	head_i;
	t_list			*last;

	head_i = 0;
	head = ft_lstnew ("hallfffgo");
	while (head_i < 6)
	{
		ft_lstadd_front (&head, ft_lstnew (0));
		head_i++;
	}
	last = ft_lstlast (head);
	ft_putstr_fd (last->content, 1);
	free_all_lst (head);
	return (0);
}
*/
