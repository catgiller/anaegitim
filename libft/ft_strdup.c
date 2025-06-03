#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*copy;

	i = 0;
	if(s == NULL)
		return (NULL);
	len = ft_strlen(s);
	copy = malloc(len + 1);
	if(copy == NULL)
		return (NULL);
	while(i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);

}