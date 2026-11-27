/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 11:28:05 by achen             #+#    #+#             */
/*   Updated: 2026-11-12 11:28:05 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
	unsigned int	count;

	head_i = 0;
	head = ft_lstnew (0);
	while (head_i < 6)
	{
		ft_lstadd_front (&head, ft_lstnew (0));
		head_i++;
	}
	count = ft_lstsize (head);
	ft_putnbr_fd (count, 1);
	free_all_lst (head);
	return (0);
}
*/