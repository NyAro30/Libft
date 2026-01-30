#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	ends1;

	i = 0;
	ends1 = ft_strlen(s1);
	while ((!s1[i]) && ft_strchr(set, s1[i]))
		i++;
	while (ends1 > i && ft_strchr(set, s1[ends1 - 1]))
		ends1--;
	return (ft_substr(s1, i, ends1 - i));
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
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

int main(void)
{
	char s1[] = "  hello world  ";
	char *result = ft_strtrim(s1, " ");
	printf("Test 1: '%s'\n", result ? result : "NULL");
	free(result);

	char s2[] = "lorem ipsum dolor sit amet";
	char *result2 = ft_strtrim(s2, "te");
	printf("Test 2: '%s'\n", result2 ? result2 : "NULL");
	free(result2);

	return 0;
}
