#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char * d = (char*) dest;
	const char* s = (const char*)src;
	size_t i = 0;
	
	while(i < n)
		d[i] = s[i];
	return (dest);
}
