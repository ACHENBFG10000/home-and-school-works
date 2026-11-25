/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <achen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:01:15 by achen             #+#    #+#             */
/*   Updated: 2026/11/25 17:36:05 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*count_mk_malloc(int n, unsigned int *len)
{
	*len = 0;
	if (n < 0)
	{
		*len += 1;
	}
	while (n != 0)
	{
		n /= 10;
		*len += 1;
	}
	return (malloc (sizeof(char) * (*len + 1)));
}

static void	convert(char *str, int n, unsigned int len)
{
	unsigned int	i;
	unsigned int	divisoin;
	int				cache;

	i = 0;
	if (n < 0)
	{
		i++;
		len--;
		n *= -1;
	}
	while (len > 0)
	{
		divisoin = 0;
		cache = n;
		while (divisoin < len - 1)
		{
			cache /= 10;
			divisoin++;
		}
		str[i] = cache % 10 + '0';
		i++;
		len--;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	if (n == 0)
	{
		str = malloc (sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		str = malloc (12);
		if (!str)
			return (NULL);
		ft_strlcpy (str, "-2147483648", 12);
		return (str);
	}
	str = count_mk_malloc (n, &len);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	convert (str, n, len);
	return (str);
}
/*
int	main(void)
{
	char			*str;
	unsigned int	n;

	str = ft_itoa (-12223132);
	n = 0;
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}
	free (str);
	return (0);
}
*/