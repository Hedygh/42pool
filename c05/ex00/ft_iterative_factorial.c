/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 00:05:38 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/18 15:02:47 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		j = j * i;
		i++;
	}
	return (j);
}
