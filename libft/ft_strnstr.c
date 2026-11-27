/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 18:19:29 by achen             #+#    #+#             */
/*   Updated: 2026-11-02 18:19:29 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_n;
	size_t	little_len;

	if (little[0] == '\0')
		return ((char *)big);
	big_n = 0;
	little_len = ft_strlen (little);
	while ((big_n < len) && (big[big_n] != '\0'))
	{
		if (little_len > len - big_n)
			return (0);
		if (ft_strncmp(&big[big_n], little, little_len) == 0)
			return ((char *)&big[big_n]);
		big_n++;
	}
	return (0);
}

/*
#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char	str1[] = "hello";
	char	str2[] = "lo";
	size_t	len = 4;

	if (ft_strnstr (str1, str2, len) == strnstr (str1, str2, len))
	{
		write (1, "ok\n", 3);
		printf ("%s\n", ft_strnstr (str1, str2, len));
		printf ("%s\n", strnstr (str1, str2, len));
	}
	else
	{
		write (1, "no\n", 3);
		printf ("%s\n", ft_strnstr (str1, str2, len));
		printf ("%s\n", strnstr (str1, str2, len));
	}
	return (0);
}
*/