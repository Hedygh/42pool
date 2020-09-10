#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str[i] == '\0')
		write(1, "\n", 1);
}
/*
int		main(int ac, char **av)
{
	if(ac > 1)
	{
		int i;
		char *tmp;
		int avc;

		avc = ac - 1;
		i = 0;
		while (avc > 0)
		{
			i = 0;
			while (i < avc)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					tmp = av[i];
					av[i] = av[i + 1];
					av[i +1] = tmp;
 				}
				i++;
			}
			avc--;
		}
	}
	int j;

	j = 1;
	while (j < ac)
	{
	ft_putstr(av[j]);
	j++;
	}
	return (0);
}*/
