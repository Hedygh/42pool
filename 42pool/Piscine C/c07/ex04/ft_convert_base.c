/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:02:07 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 11:43:09 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char			*ft_itoa_base(int nb, char *base);

int				ft_getindex(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
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
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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
		while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\r') || (str[i] == '\f') || (str[i] == ' '))
			i++;
		while ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				c = c * -1;
			i++;
		}
		while (ft_getindex(base, str[i]) != -1)
			nb = nb * t + ft_getindex(base, str[i++]);
	}
	return (nb * c);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*res;
	int			nb;

	if ((base_from == '\0') || (base_to == '\0'))
		return (0);
	if (!ft_chkbase(base_from) || !ft_chkbase(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(nb, base_to);
	return (res);
}
int main()
{
	printf("%s", ft_convert_base("11", "0123456789", "01"));
}
