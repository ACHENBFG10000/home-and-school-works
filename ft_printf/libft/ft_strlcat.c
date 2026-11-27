/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-30 16:59:49 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_n;
	size_t	i;
	size_t	s_len;

	d_n = 0;
	i = 0;
	while (d_n < size && dst[d_n] != '\0')
		d_n += 1;
	s_len = ft_strlen (src);
	if (d_n == size)
		return (s_len + size);
	dst += d_n;
	while ((i < (size - d_n) - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (d_n + s_len);
}

/*
#include <stdio.h>

int main(void)
{
	char	dst[6] = "aaa";
	char	src[] = "123456789";
	size_t	length;

	length = ft_strlcat (dst, src, );
	printf ("%s\n", dst);
	printf ("%zu", length);
	return (0);
}
*/
