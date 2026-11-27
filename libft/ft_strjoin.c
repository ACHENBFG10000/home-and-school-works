/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 11:42:49 by achen             #+#    #+#             */
/*   Updated: 2026-11-05 11:42:49 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_of_s1_s2;
	char	*str;

	if (!s1 || !s2)
		return (ft_strdup(""));
	len_of_s1_s2 = ft_strlen (s1) + ft_strlen (s2);
	str = malloc(len_of_s1_s2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_of_s1_s2 + 1);
	ft_strlcat(str, s2, len_of_s1_s2 + 1);
	return (str);
}

// #include <unistd.h>
// #include <stdio.h>

// void	while_write(char *s)
// {
// 	printf("%s$\n", s);
// 	return ;
// }

// int	main(int argc, char **argv)
// {
// 	int		n;
// 	char	*p;

// 	(void)argc;
// 	p = ft_strjoin (argv[1], argv[2]);
// 	n = 0;
// 	while_write (p);
// 	free (p);
// 	return (0);
// }