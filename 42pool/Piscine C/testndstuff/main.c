/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 12:21:05 by cmarien           #+#    #+#             */
/*   Updated: 2020/08/16 15:13:30 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush01.h"

int		main(int ac, char **av)
{
	int **grille;

	if (check_conditions(ac, av[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	grille = get_grille();
	if (valide(grille, 0, av[1]))
		show_grille(grille);
	else
		write(1, "Error\n", 6);
	return (0);
}
