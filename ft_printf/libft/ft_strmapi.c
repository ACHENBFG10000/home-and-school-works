/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 11:45:39 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			s_len;

	if (!s || !f)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	s_len = ft_strlen (s);
	str = malloc (sizeof(char) * (s_len + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
static char	big(unsigned int n, char c)
{
	(void)n;
	if (('a' <= c) && (c <= 'z'))
		c -= 32;
	return (c);
}

static char	smal(unsigned int n, char c)
{
	(void)n;
	if (('A' <= c) && (c <= 'A'))
		c += 32;
	return (c);
}


#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		n;

	(void)argc;
	n = 0;
	if (argv[2][0] == 'b')
		str = ft_strmapi (argv[1], &big);
	if (argv[2][0] == 's')
		str = ft_strmapi (argv[1], &smal);
	if (!str)
	{
		write (1, "NULL", 4);
		return (0);
	}
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}
	free (str);
	return (0);
}
*/
