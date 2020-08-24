#include <stdio.h>
int main(int ac, char **av)
{
	ac = 0;
	char **tab;
	tab = ft_split(av[1], av[2]);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return(0);
}
