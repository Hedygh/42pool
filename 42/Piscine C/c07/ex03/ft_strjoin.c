/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:34:56 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/21 13:44:00 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen_all(int size, char **strs, char *sep)
{
	int i;
	int lenstrs;
	int lenseps;

	lenstrs = 0;
	lenseps = 0;
	i = 0;
	while (i < size)
	{
		lenstrs = lenstrs + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		lenseps = lenseps + ft_strlen(sep);
		i++;
	}
	return (lenstrs + lenseps);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			strs_sep_lenght;
	char		*newstr;

	i = 0;
	strs_sep_lenght = ft_strlen_all(size, strs, sep);
	if (size == 0)
	{
		newstr = malloc(sizeof(char) * 0);
		return (newstr);
	}
	if (!(newstr = malloc(sizeof(char) * strs_sep_lenght + 1)))
		return (0);
	newstr[0] = '\0';
	while (i < size)
	{
		ft_strcat(newstr, strs[i]);
		if (i < size - 1)
			ft_strcat(newstr, sep);
		i++;
	}
	return (newstr);
}
