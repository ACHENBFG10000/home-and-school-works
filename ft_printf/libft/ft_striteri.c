/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 13:46:42 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;

	if (!s || !f)
		return ;
	n = 0;
	while (s[n] != '\0')
	{
		f(n, &s[n]);
		n++;
	}
	return ;
}

/*
static void	big(unsigned int n, char *c)
{
	(void)n;
	if (('a' <= *c) && (*c <= 'z'))
		*c -= 32;
	return ;
}

static void	smal(unsigned int n, char *c)
{
	(void)n;
	if (('A' <= *c) && (*c <= 'Z'))
		*c += 32;
	return ;
}

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;

	(void)argc;
	n = 0;
	if (argv[2][0] == 'b')
		ft_striteri (argv[1], &big);
	if (argv[2][0] == 's')
		ft_striteri (argv[1], &smal);
	while (argv[1][n] != '\0')
	{
		write (1, &argv[1][n], 1);
		n++;
	}
	return (0);
}
*/
