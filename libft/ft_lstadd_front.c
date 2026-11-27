/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 10:59:29 by achen             #+#    #+#             */
/*   Updated: 2026/11/13 17:27:05 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst | !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = (*lst);
	(*lst) = new;
}

/*
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char    str0[] = "hallo";
    char    str1[] = " world";
    t_list  *head;
    t_list  *p;

    head = ft_lstnew (str0);
    ft_lstadd_front (&head, ft_lstnew (str1));
    p = head;
    ft_putstr_fd (str0, 1);
    ft_putstr_fd (str1, 1);
    write (1, "\n", 1);
    while (p != NULL)
    {
        ft_putstr_fd (p->content, 1);
        p = p->next;
    }
    free (head->next);
    free (head);
    return (0);
}
*/
