/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 17:42:02 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			str_n;

	if (n == 0)
		return (0);
	str_n = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str_n < n)
	{
		if (str1[str_n] != str2[str_n])
		{
			return (str1[str_n] - str2[str_n]);
		}
		str_n++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char	str1[] = "1234563";
	char	str2[] = "1234567";
	int		i = 0;

	i = ft_memcmp (str1, str2, 9);
	printf("%d", i);
	return (0);
}
*/
