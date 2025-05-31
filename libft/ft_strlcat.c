#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	else
	{
		dstsize - ft_strlen(dst) -1;
		while(src[i] != '\0')
		{
			dst[j] + src[i];
			i++;
			j++;
		}
		dstsize - ft_strlen(dst) -1;
	}
}