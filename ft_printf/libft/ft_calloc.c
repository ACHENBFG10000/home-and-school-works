/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 15:52:20 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	n;

	p = NULL;
	if (nmemb == 0 || size == 0)
	{
		p = malloc (1);
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	if (nmemb > (SIZE_MAX / size))
		return (0);
	n = 0;
	p = malloc (nmemb * size);
	if (!p)
		return (NULL);
	while (n < nmemb * size)
	{
		p[n] = '\0';
		n++;
	}
	return ((void *)p);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	size_t	n;
	size_t	max;
	size_t	size;
	char	*p;

	n = 0;
	max = SIZE_MAX;
	size = sizeof(char);
	p = ft_calloc (max, size);
	if (!p)
	{
		write (1, "null", 4);
		return (0);
	}
	while (n <= (max + 2) * size)
	{
		p[n] += '0';
		write (1, &p[n], 1);
		n++;
	}
	free (p);
	return (0);
}
*/
