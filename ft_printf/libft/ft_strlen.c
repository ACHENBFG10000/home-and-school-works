/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:20:03 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n_s;

	n_s = 0;
	while (s[n_s] != '\0')
	{
		n_s++;
	}
	return (n_s);
}

/*
#include <stdio.h>

int main(void)
{
	char	str[] = "hello";
	int		n_str;

	n_str = ft_strlen(str);
	printf ("%d", n_str);
	return (0);
}
*/
