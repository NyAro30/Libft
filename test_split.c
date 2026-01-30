#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (start >= s_len)
		len = 0;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

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

static void	**free_tab(char **tab, int i)
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
			erase = free_tab(tab, i - 1);
			return (NULL);
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

int main(void)
{
	char **result = ft_split("lorem ipsum dolor", ' ');
	int i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return 0;
}
