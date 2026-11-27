/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:57:12 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((0 <= c) && (c <= 127))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_isascii(5));
	printf("%d",ft_isascii('a'));
	printf("%d",ft_isascii('>'));
	printf("%d",ft_isascii(999));
	return (0);
}
*/
