int	ft_tolower(int c)
{
	if(c >= 65 && c <=90 )
	return(c + 32);
}

#include <stdio.h>

int main()
{
	printf("%c", ft_tolower('S'));
}