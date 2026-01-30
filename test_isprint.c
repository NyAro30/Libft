#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

int main(void)
{
	int i = 123;
	while (i <= 127)
	{
		printf("i=%d, ft_isprint=%d\n", i, ft_isprint(i));
		i++;
	}
	return 0;
}
