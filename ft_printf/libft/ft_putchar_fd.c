/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 15:11:43 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:02 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}

/*
int	main(int argc, char **argv)
{
	int	n_file;

	(void)argc;
	n_file = open (argv[1], O_WRONLY);
	if (n_file == -1)
	{
		write (1, "no found", 8);
		return (0);
	}
	ft_putchar_fd (argv[2][0], n_file);
	close (n_file);
	return (0);
}
*/
