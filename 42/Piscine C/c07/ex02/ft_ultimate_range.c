/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 11:42:50 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/20 12:03:52 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if(!(*range = malloc(sizeof(int) * max - min)))
		return (0);

	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	if (i == max - min)
		return (i);
	else
		return (-1);
}

int main()
{
	int *tab;
	ft_ultimate_range(&tab, 5, 15);
}
