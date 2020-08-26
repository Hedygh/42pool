/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 16:45:15 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/26 17:04:26 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int				ft_chekbase(char *str)
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
int		ft_lenb(int nb, char *base)
{ 
	long nbr;
	int i  = 0;

	nbr = nb;
	if (nbr <= 0)
		i = 1;
	while (nbr)
	{
		nbr = nbr / ft_chekbase(base);
		i++;
	}
	return(i);
}
char	*ft_itoa_base(int nb, char *base)
{
	int i;
	char *str;
	long nbr;

	i = 0;
	nbr = nb;
	if(!(str = malloc(sizeof(char) * (ft_lenb(nb, base) + 1))))
		return (0);
	str[ft_lenb(nb, base)] = '\0';
	if (nbr < 0)
	{
	}
	while(i < ft_lenb(nb, base))
	{
		str[i] = base[nbr % ft_chekbase(base)];
		nbr = nbr / ft_chekbase(base);
		i++;
	}
	return (ft_strrev(str));
}
