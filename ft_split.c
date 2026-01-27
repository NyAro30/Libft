/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:00:38 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/27 15:35:56 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static char	**free_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int	get_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**fill_tab(char **tab, char const *s, char c, int word_count)
{
	int		i;
	char	**erase;

	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, get_word_len(s, c));
		if (!tab[i])
		{
			erase = free_tab(tab, 1);
			return (erase);
		}
		s += get_word_len(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	result = fill_tab(tab, s, c, word_count);
	return (result);
}
