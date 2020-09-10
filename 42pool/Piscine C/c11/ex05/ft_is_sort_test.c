#include <stdio.h>

int		ft(int a, int b)
{
	if (b < a)
		return (1);
	if (a < b)
		return (-1);
	return (0);
}
int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = lenght;
	}
	while (j < lenght - 1)
	{
		if (f(tab[j], tab[j + 1]) <= 0)
			j++;
		else
			j = lenght;
	}
	if ((i == lenght - 1) || (j == lenght - 1))
		return (1);
	else
		return (0);
}
int main()
{
	int lenght = 4;
	int tab[4] = {5, 4, 2, 0};
	printf("%d\n", ft_is_sort(tab, lenght, ft));
}
