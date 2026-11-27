/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:31:52 by achen             #+#    #+#             */
/*   Updated: 2026/10/27 15:31:52 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i += 1;
	}
	return (p);
}

/*
#include <stdio.h>
//按照c把s填满
int	main(void)
{
	int		n = 999;
	char	str[] = "hallo";
	int		*p_n;
	char	*p_str;

	p_n = ft_memset (&n, 'c', sizeof(n));
	p_str = ft_memset (&str, 'u', sizeof(str));
	printf("%d\n", *p_n);
	printf("%s\n", p_str);
	return (0);
}
*/