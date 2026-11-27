/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-28 15:19:47 by marvin            #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if ((dest == 0) && (src == 0))
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest > p_src)
	{
		i = n;
		while (0 < i)
		{
			i -= 1;
			p_dest[i] = p_src[i];
		}
	}
	else
		return (ft_memcpy (dest, src, n));
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	str1[] = "12345";
	char	str2[] = "abcde";

	printf ("%s\n", (char *)ft_memmove (&str1[0], &str1[2], 3));
	printf ("%s", (char *)ft_memmove (&str2[2], &str2[0], 3));
}
*/
