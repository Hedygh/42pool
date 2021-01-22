char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;

	while(str[j+1]) 
	j++;
	while(i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return(str);
}

#include <stdio.h> 
int main(int ac, char **av)
{
	if(ac == 2)
	{
		printf("%s", ft_strrev(av[1]));
	}
}
