/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:00:30 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/24 21:33:51 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_checksep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str, int n)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (str[i] && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_countword(char *str, char *sep)
{
	int	i;
	int	j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (ft_checksep(str[i], sep) == 1 && str[i])
			i++;
		j = 0;
		while (ft_checksep(str[i + j], sep) != 1 && str[i + j])
			j++;
		if (j > 0)
			count++;
		i = i + j;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		n;
	int		nbw;
	char	**tab;

	j = 0;
	nbw = ft_countword(str, charset);
	if (!(tab = malloc(sizeof(char*) * (nbw + 1))))
		return (0);
	i = 0;
	while (i < nbw)
	{
		while (ft_checksep(str[j], charset) == 1 && str[j])
			j++;
		n = 0;
		while (ft_checksep(str[j + n], charset) != 1 && str[j + n])
			n++;
		tab[i] = ft_strdup(&str[j], n);
		j = j + n;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
