/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 19:08:06 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 16:55:29 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	free_mem(char **big, int i)
{
	if (big == NULL)
		return (0);
	while (i > 0)
	{
		i--;
		free (big[i]);
	}
	free (big);
	return (0);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	times_word;

	i = 0;
	times_word = 0;
	if (s == NULL || *s == '\0')
		return (0);
	if (s[0] != c && s[0] != '\0')
		times_word++;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			times_word++;
		i++;
	}
	return (times_word);
}

static int	create_words(char **big, const char *s, char c, int num_words)
{
	int	start;
	int	total;
	int	current_str;

	start = 0;
	current_str = 0;
	while (s[start] && num_words > 0)
	{
		total = 0;
		if (s[start] == c)
			start++;
		if (s[start] != c)
		{
			while (s[start + total] != c && s[start + total] != '\0')
				total++;
			big[current_str] = ft_substr(s, start, total);
			if (big[current_str] == NULL)
				return (free_mem(big, current_str));
			current_str++;
			start += total;
			num_words--;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**big;
	int		words;

	words = count_words(s, c);
	big = ft_calloc(sizeof(char *), words + 1);
	if (big == NULL)
		return (NULL);
	if (create_words(big, s, c, words) == 1)
		return (big);
	else
		return (NULL);
}
