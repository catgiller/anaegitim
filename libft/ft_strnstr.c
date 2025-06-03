#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[j] && big[i + j] && (i + j) < len && big[i + j] == big[j])
			j++;
		if (big[j] == '\0')
			return ((char *)(big + i));
	i++;
	}
	return (NULL);
}