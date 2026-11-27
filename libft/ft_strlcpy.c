/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-29 17:22:35 by achen             #+#    #+#             */
/*   Updated: 2026-10-29 17:22:35 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	size_of_src;

	size_of_src = ft_strlen (src);
	if (size == 0)
		return (size_of_src);
	n = 0;
	while ((src[n] != '\0') && (n + 1 < size))
	{
		dst[n] = src[n];
		n += 1;
	}
	dst[n] = '\0';
	return (size_of_src);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s_str[] = "hallo aaa";
	char	d_str[4];
	size_t	size_s;

	size_s = ft_strlcpy (d_str, s_str, sizeof(d_str));
	printf ("%s\n", d_str);
	printf ("%zu", size_s);
	return (0);
}
*/