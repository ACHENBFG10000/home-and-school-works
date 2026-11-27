/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 14:12:08 by achen             #+#    #+#             */
/*   Updated: 2026-11-02 14:12:08 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	s_n;

	s_n = 0;
	while (s[s_n] != '\0')
	{
		if (s[s_n] == (char)c)
			return ((char *)&s[s_n]);
		s_n++;
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
	char	src[] = "123456789";
	char	*p;
	int		i = 0;

	p = ft_strchr (src, 0);
	while (p[i])
	{
		write (1, &p[i], 1);
		i += 1;
	}
	return (0);
}
*/