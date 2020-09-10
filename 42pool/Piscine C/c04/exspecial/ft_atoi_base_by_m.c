/*
int				is_space(char c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\n') ||
		(c == '\r') || (c == '\f') || (c == ' '))
		return (1);
	return (0);
}

int				findindex(const char c, char *base)
{
	int			i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int				ft_chkbase(char *str)
{
	int			i;
	int			j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if ((str[i] == '-') || (str[i] == '+'))
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (i);
}

int				ft_atoi_base(char *str, char *base)
{
	long int	nb;
	int			i;
	int			t;
	int			c;

	t = ft_chkbase(base);
	nb = 0;
	i = 0;
	c = 1;
	if (t != 0)
	{
		while (is_space(str[i]))
			i++;
		while ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				c = c * -1;
			i++;
		}
		while ((str[i]) && (findindex(str[i], base) != -1))
			nb = nb * t + findindex(str[i++], base);
	}
	return (nb * c);
}
*/
