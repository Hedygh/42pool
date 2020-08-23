/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:00:30 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/23 15:00:29 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char*str)
{
	while(str[i])
		i++;
			return(i);
}

char	ft_supsep(char *str, *char sep)
{
	int i;
	int j;
	char *clear;

	i = 0;
	j = 0;

	while (str[i])
	{
		while (str[i] == sep)
		{
			i++;
			while (str[i] =! sep)
			{
			clear = str[i];
			i++;
			return(clear);
			}
		}
	}
}
char **ft_split(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i])
	{	
		while (ft_countwords(str, charset) == -1)
		{
			
		}
	i++;
	}
}
