/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:00:30 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/23 18:58:27 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_checksep(char c, char *sep)
{
	char *str;
	int i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int		f_slen(char*str)
{
	while(str[i])
		i++;
	return(i);
}

char	ft_strdup(char *str)
{
	int i;
	char *dest;

	i = 0;
	while (str[i])
		i++;
	if(!(dest=malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (dest[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_countword(char *str, *char sep)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;

	while (str[i])
	{
		while (ft_checksep(sep, str[i]) == 1)
			i++;
		if (ft_checksep(sep, str[i] != 1)
			count = count + 1;
		while (ft_checksep(sep, str[i]) == 0)
			i++;
	}
	return (count);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int nbw;
	char **tab;

	nbw = ft_countword(str, charset);
	if (!(tab = malloc(sizeof(char*) * (nbw + 1))))
		return(0);
	i = 0;
	while (i < nbw)
	{	
		if (!(tab[i] = malloc(sizeof(char) * (stlen(tab[i]) + 1))))
			return(0);
		i++;
	}
}
