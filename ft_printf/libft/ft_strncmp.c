/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 15:53:43 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	n_str;

	if (n == 0)
		return (0);
	n_str = 0;
	while (n_str < n - 1 && (s1[n_str] == s2[n_str]))
	{
		if (s1[n_str] == '\0')
			return (0);
		n_str++;
	}
	return ((unsigned char)s1[n_str] - (unsigned char)s2[n_str]);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "aaaab";
	char	str2[] = "aaaaa";

	printf ("%s\n", str1);
	printf ("%s\n", str2);
	printf ("%d", ft_strncmp (str1, str2, 5));
	return (0);
}
*/
