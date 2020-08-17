/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:36:42 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/17 13:18:21 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
				|| (str[i] == '\n') ||
				(str[i] == '\r') || (str[i] == '\f') || (str[i] == ' '))
			i++;
		while ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				c = c * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * t + str[i] - '0'; 
		i++;
		}
	}
	return (nb * c);
}
int main()
{
	char str[] = "   ---++-10anbc";
	char base[] = "0123456789abcdef";
	printf("%d", ft_atoi_base(str, base));
}
