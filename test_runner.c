#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
    printf("%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
    return 0;
}
