/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 20:08:51 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/26 12:56:08 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;
	while (str[j + 1] != '\0')
		j++;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return(str);
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

char	ft_itoa_base(int nb, char *base)
{
	int i;
	char *str;
	int t;
	long nbr;

	nbr = nb;
	t = ft_chkbase(base);
	i = 0;
	if(!(str = malloc(sizeof(char) * t + 2)))
		return (0);
	while (nbr)
	{
		str[i] = nbr % t + '0';
		nbr = nbr / 10;
	}
	return (ft_strrev(str));
}
char	ft_convert_base2(int nb, char *base_to)
{
	if(!(ft_itoa_base = malloc (sizeof(char) * 34)))
		return (0);
	return (ft_itoa_base(nb, base_to);
}
				

