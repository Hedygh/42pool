/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:36:42 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 11:48:28 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_getindex(char *str, char c)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (i);
		i++;
	}
	return(-1);
}
int				ft_chkbase(char *str)
{
	int i;
	int j;

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
		{
			nb = nb * t + ft_getindex(base, str[i]); 
		i++;
		}
	}
	return (nb * c);
}
int main()
{
	char str[] = "   ---++-42anbc";
	char base[] = "0123456789abcdef";
	printf("%d", ft_atoi_base(str, base));
}
