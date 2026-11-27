/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 15:12:28 by achen             #+#    #+#             */
/*   Updated: 2026-11-02 15:12:28 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_n;

	s_n = ft_strlen (s);
	while (s_n > 0)
	{
		if (s[s_n] == (char)c)
			return ((char *)&s[s_n]);
		s_n--;
	}
	if (s[s_n] == (char)c)
		return ((char *)&s[s_n]);
	return (0);
}

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	src[] = "01234567894";
	char	*p;
	int		i = 0;

	p = ft_strrchr (src, 'd');
	if (!p)
	{
		write (1, "no find", 7);
		return (0);
	}
	while (p[i])
	{
		write (1, &p[i], 1);
		i += 1;
	}
	return (0);
}
*/