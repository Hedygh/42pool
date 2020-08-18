/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 13:30:05 by cmarien           #+#    #+#             */
/*   Updated: 2020/08/18 17:11:13 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**get_grille(void)
{
	int **grille;
	int i;
	int j;

	i = 0;
	if (!(grille = malloc(sizeof(int *) * 4)))
		return (NULL);
	if (!(grille[0] = malloc(sizeof(int) * 4)))
		return (NULL);
	if (!(grille[1] = malloc(sizeof(int) * 4)))
		return (NULL);
	if (!(grille[2] = malloc(sizeof(int) * 4)))
		return (NULL);
	if (!(grille[3] = malloc(sizeof(int) * 4)))
		return (NULL);
	while (i < 4)
	{
		j = 0;
		while (j++ < 4)
			grille[i][j - 1] = 0;
		i++;
	}
	return (grille);
}

int		check_conditions(int ac, char *str)
{
	int i;

	i = 0;
	if (ac != 2)
		return (0);
	while (str[i])
		i++;
	if (i != 31)
		return (0);
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && str[i] < '0' && str[i] > '4')
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	show_grille(int **grille)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grille[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			if (j == 3)
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

int		checkcol2(char *str, int **grille, int j)
{
	int		i;
	char	c;
	int		max;

	i = 3;
	c = '0';
	max = 0;
	while (i >= 0)
	{
		if (grille[i][j] > max)
		{
			c++;
			max = grille[i][j];
		}
		i--;
	}
	if (c != str[((j * 2) + 8)])
		return (0);
	return (1);
}

int		checkligne2(char *str, int **grille, int i)
{
	int		j;
	int		max;
	char	c;

	c = '0';
	max = 0;
	j = 3;
	while (j >= 0)
	{
		if (grille[i][j] > max)
		{
			c++;
			max = grille[i][j];
		}
		j--;
	}
	if (c != str[((i * 2) + 24)])
		return (0);
	return (1);
}
