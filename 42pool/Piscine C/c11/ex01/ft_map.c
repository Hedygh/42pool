/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:00:25 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/25 18:06:59 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *bat;

	i = 0;
	if (!(bat = malloc(sizeof(int) * lenght)))
		return (0);
	while (i < lenght)
	{
		bat[i] = f(tab[i]);
		i++;
	}
	return (bat);
}
