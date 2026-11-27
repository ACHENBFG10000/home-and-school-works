/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 10:45:49 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f (lst->content);
		lst = lst->next;
	}
}

/*
#include <stdlib.h>

static void	put(void *str)
{
	ft_putstr_fd ((char *)str, 1);
}

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
	ft_lstiter (head, put);
	ft_lstclear (&head, &free_all_lst);
	if (head == NULL)
		ft_putstr_fd ("pointer NULL\n", 1);
	return (0);
}
*/
