/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-04 12:13:17 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen (s);
	str = (char *)malloc (len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy (str, s, len + 1);
	return (str);
}

/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	char	*p;

	(void)argc;
	n = 0;
	p = ft_strdup (argv[1]);
	if (!p)
	{
		write (1, "null", 4);
		free (p);
		return (0);
	}
	while (p[n] != '\0')
	{
		write (1, &p[n], 1);
		n++;
	}
	free (p);
	return (0);
}
*/
