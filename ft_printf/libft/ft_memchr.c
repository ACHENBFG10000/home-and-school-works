/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 16:04:37 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		find;
	size_t				s_n;

	s_n = 0;
	find = (unsigned char)c;
	str = (const unsigned char *)s;
	while (s_n < n)
	{
		if (str[s_n] == find)
			return ((void *)&str[s_n]);
		s_n++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "123456789";
	char	*p;

	p = ft_memchr (str, 256 + '5', 11);
	if (!p)
		printf("no find");
	printf ("%s", p);
	return (0);
}
*/
