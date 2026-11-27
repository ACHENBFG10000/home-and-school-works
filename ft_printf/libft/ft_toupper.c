/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 13:46:10 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (('a' <= c) && (c <= 'z'))
		return (c - 32);
	return (c);
}

/*
#include <unistd.h>
int	main(void)
{
	char	str[] = "hafasSD523";
	int		i = 0;

	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
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
