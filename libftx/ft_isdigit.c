typedef struct	character
{
	char	*race;
	int		health;
}ch;

#include <stdio.h>

int main()
{
	// struct character	erva;
	// struct character	nazife;
	ch erva;
	erva.race = "human";
	erva.health = 1402;
	printf("%s\n%d\n", erva.race,erva.health);
}
