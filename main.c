#include "libft.h"
#include <stdio.h>

int main()
{
    char a[100] = "Hello, World";

  char *b = ft_memcpy(a + 2, a, 5);

    printf("Sonuç: %s\n", a);

    return 0;
}