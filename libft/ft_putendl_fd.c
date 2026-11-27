/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 16:18:39 by achen             #+#    #+#             */
/*   Updated: 2026-11-09 16:18:39 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen (s));
	write (fd, "\n", 1);
	return ;
}

/*
int	main(int argc, char **argv)
{
	int	n_file;

	(void)argc;
	n_file = open (argv[1], O_WRONLY | O_APPEND);
	if (n_file == -1)
	{
		write (1, "no found", 8);
		return (0);
	}
	ft_putendl_fd (argv[2], n_file);
	close (n_file);
	return (0);
}
*/