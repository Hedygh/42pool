/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:03:12 by cmarien           #+#    #+#             */
/*   Updated: 2020/08/18 17:12:03 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	abs_ligne(int k, int **grille, int i)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (grille[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int	abs_col(int k, int **grille, int j)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (grille[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int	checkcol(char *str, int **grille, int j)
{
	int		i;
	char	c;
	int		max;

	i = 0;
	c = '0';
	max = 0;
	while (i < 4)
	{
		if (grille[i][j] > max)
		{
			c++;
			max = grille[i][j];
		}
		if (grille[i][j] == 0)
			return (1);
		i++;
	}
	if (c != str[j * 2])
		return (0);
	return (checkcol2(str, grille, j));
}

int	checkligne(char *str, int **grille, int i)
{
	int		j;
	char	c;
	int		max;

	j = 0;
	c = '0';
	max = 0;
	while (j < 4)
	{
		if (grille[i][j] > max)
		{
			c++;
			max = grille[i][j];
		}
		if (grille[i][j] == 0)
			return (1);
		j++;
	}
	if (c != str[((i * 2) + 16)])
		return (0);
	return (checkligne2(str, grille, i));
}

int	valide(int **grille, int position, char *str)
{
	int i;
	int j;
	int k;

	i = position / 4; //ligne
	j = position % 4; // colonne
	k = 0; // valeur
	if (position == 4 * 4) // fin de tableau
		return (1);
	if (grille[i][j] != 0)
		return (valide(grille, position + 1, str)); //recursif +1
	while (k++ < 4)
	{
		if (abs_ligne(k, grille, i) == 1 && abs_col(k, grille, j) == 1) // check ligne et colonne 
		{
			grille[i][j] = k;// prend la valeur dans la case
			if (checkligne(str, grille, j) == 1 &&
					checkcol(str, grille, i) == 1) // check next position
				if (valide(grille, position + 1, str)) // recursive jusqu'a 
					return (1);
		}
	}
	grille[i][j] = 0;
	return (0);
}
