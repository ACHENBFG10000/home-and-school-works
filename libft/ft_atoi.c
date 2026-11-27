/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 15:01:30 by achen             #+#    #+#             */
/*   Updated: 2026-11-03 15:01:30 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	nbr;
	int				negative;

	if (!nptr)
		return (0);
	nbr = 0;
	negative = 1;
	while ((9 <= *nptr && *nptr <= 13) || (*nptr == 32))
		nptr++;
	if (*nptr == '\0')
		return (0);
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			negative = -1;
		nptr++;
	}
	while ('0' <= *nptr && *nptr <= '9')
	{
		nbr = nbr * 10 + (*nptr - '0');
		nptr++;
	}
	return (nbr * negative);
}
/*
#include <stdio.h>

int	main(int argv, char **argc)
{
	(void)argv;
	int	nbr;

	nbr = ft_atoi(argc[1]);
	printf ("%d", nbr);
	return (0);
}
*/