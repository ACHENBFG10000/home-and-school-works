/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-29 16:57:38 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i += 1;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int		n[2];
	char	str[] = "hallo";

	n[0] = 4444;
	n[1] = 325;
	ft_bzero (&n, sizeof(n));
	ft_bzero (&str, sizeof(str));
	printf("%d\n", *n);
	printf("%s\n", str);
	return (0);
}
*/
