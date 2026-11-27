/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 14:07:21 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (('A' <= c) && (c <= 'Z'))
		return (c + 32);
	return (c);
}

/*
#include <unistd.h>
int	main(void)
{
	char	str[] = "haSSSasSD523";
	int		i = 0;

	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}
*/
