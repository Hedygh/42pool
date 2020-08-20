/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:34:56 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/20 18:00:28 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	strcat(char *str)
{

}
int		ft_strlen(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen_all(int size, char **strs, char *sep)
{
	int i;
	char *strss;
	int lenstrs;
	int lenseps;


	i = 0;
	lenstrs = 0;
	lenseps = 0; 
	while (i < size)
	{
		lenstrs = lenstrs + ft_strlen(strss[i]); //i nombre de chaine, se situe sur quelle chaine on envoit a len
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		lenseps = lenseps + ft_strlen(lenseps);
		i++; 
	}
	return (lenstrs + lenseps); //len total
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int strs_sep_lenght;
	char *str;

	i = 0;
	if (size == 0)
	{
		str=malloc(sizeof(char) * 1)
			return(str);
	}
	while()
	{

	}
}
