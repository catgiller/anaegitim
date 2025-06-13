#include "libft.h"
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	**result;
	int		i = 0;
	char	*str = "merhaba 42  Kocaeli";
	char	delimiter = ' ';

	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Bellek hatası!\n");
		return (1);
	}
	while (result[i])
	{
		printf("Kelime %d: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
