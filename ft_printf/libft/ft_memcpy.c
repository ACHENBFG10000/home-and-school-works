/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-28 13:04:28 by marvin            #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if ((!dest) && (!src))
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i += 1;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[88];
	char	str[] = "hallo";
	char	*p;
	int		int_dest[1];
	int		int_src[2];
	int		*int_p;

	int_src[0] = 999;
	int_src[1] = 3252;
	int_p = ft_memcpy (&int_dest, &int_src, sizeof(int_src));
	printf("%d\n", int_p[0]);
	printf("%d\n", int_p[1]);
	p = ft_memcpy (&dest, &str, sizeof(str));
	printf("%s\n", p);
	return (0);
}
*/
