/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-04 16:25:22 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_len;
	size_t	sub_max_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen (s);
	if ((s_len < start) || len == 0)
	{
		p = malloc (1);
		if (!p)
			return (0);
		*p = '\0';
		return (p);
	}
	sub_max_len = ft_strlen (&s[start]);
	if (sub_max_len <= len)
	{
		len = sub_max_len;
	}
	p = malloc (len + 1);
	if (!p)
		return (0);
	ft_strlcpy (p, &s[start], len + 1);
	return (p);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*substr;
	
	(void)argc;
	substr = ft_substr (argv[1], 4, 5555);
	printf ("%s\n", argv[1]);
	printf ("%s", substr);
	free (substr);
	return (0);
}
*/
