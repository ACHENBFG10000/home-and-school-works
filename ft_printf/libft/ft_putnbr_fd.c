/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 16:46:06 by achen             #+#    #+#             */
/*   Updated: 2026/11/27 15:51:01 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static unsigned int	count_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		len += 1;
	}
	while (n != 0)
	{
		n /= 10;
		len += 1;
	}
	return (len);
}

static void	convert_write(int fd, int n, unsigned int len)
{
	char			c;
	unsigned int	divisoin;
	int				cache;

	if (n < 0)
	{
		write (fd, "-", 1);
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
		c = cache % 10 + '0';
		write (fd, &c, 1);
		len--;
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	len = count_len (n);
	convert_write (fd, n, len);
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
	ft_putnbr_fd (-123456789, n_file);
	close (n_file);
	return (0);
}
*/
