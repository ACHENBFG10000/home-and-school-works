/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 12:50:46 by achen             #+#    #+#             */
/*   Updated: 2026-11-06 12:50:46 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static char	**all_free(char **all_word)
{
	unsigned int	word;

	word = 0;
	while (all_word[word])
	{
		free (all_word[word]);
		word++;
	}
	free (all_word);
	return (0);
}

static unsigned int	count_word(const char *s, char c)
{
	unsigned int	n;
	unsigned int	count;

	n = 0;
	count = 0;
	while (s[n])
	{
		while (s[n] == c)
			n++;
		if (s[n] != c && s[n] != '\0')
		{
			count++;
			while (s[n] != '\0' && s[n] != c)
				n++;
		}
	}
	return (count);
}

static char	**cpy_words(char **all_word, const char *s, char c)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	word;

	start = 0;
	end = 0;
	word = 0;
	while (s[end])
	{
		while (s[end] == c)
			end++;
		if (s[end] != c && s[end] != '\0')
		{
			start = end;
			while (s[end] != '\0' && s[end] != c)
				end++;
			all_word[word] = malloc (sizeof(char) * (end - start + 1));
			if (!all_word[word])
				return (all_free (all_word));
			ft_strlcpy (all_word[word], &s[start], end - start + 1);
			word++;
		}
	}
	all_word[word] = 0;
	return (all_word);
}

char	**ft_split(char const *s, char c)
{
	char	**all_word;

	if (!s)
	{
		all_word = malloc(1);
		if (!all_word)
			return (NULL);
		*all_word = NULL;
		return (all_word);
	}
	all_word = malloc (sizeof(char *) * (count_word (s, c) + 1));
	if (!all_word)
		return (0);
	all_word = cpy_words (all_word, s, c);
	return (all_word);
}

/*
int	main(int argc, char **argv)
{
	char			**all_word;
	unsigned int	word;
	unsigned int	n;

	(void)argc;
	all_word = ft_split(argv[1], argv[2][0]);
	if (!all_word)
	{
		write (1, "no memry", 8);
		return (0);
	}
	word = 0;
	n = 0;
	while (all_word[word])
	{
		n = 0;
		while (all_word[word][n])
		{
			write (1, &all_word[word][n], 1);
			n++;
		}
		word++;
		write (1, "\n", 1);
	}
	all_free (all_word);
	return (0);
}
*/