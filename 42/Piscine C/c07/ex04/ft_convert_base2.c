/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 20:08:51 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/26 13:48:56 by heouahes         ###   ########.fr       */
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

char	*ft_itoa_base(int nb, char *base)
{
	int i;
	char *str;
	long nbr;
	int nbrr;

	i = 0;
	nbr = nb;
	nbrr = nb;
	while (nbrr)
	{
		nbrr = nbrr / ft_chekbase(base);
		i++;
	}	
	if(!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (nbr)
	{
		str[i] = base[nbr % ft_chekbase(base)];
		nbr = nbr / ft_chekbase(base);
		i++;
	}
	return (ft_strrev(str));
}
