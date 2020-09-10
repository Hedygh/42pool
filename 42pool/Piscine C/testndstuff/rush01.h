/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:08:04 by cmarien           #+#    #+#             */
/*   Updated: 2020/08/16 15:12:00 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		**get_grille(void);
int		check_conditions(int ac, char *av);
int		valide(int **grille, int position, char *str);
void	show_grille(int **grille);
int		checkcol2(char *str, int **grille, int j);
int		checkligne2(char *str, int **grille, int i);

#endif
