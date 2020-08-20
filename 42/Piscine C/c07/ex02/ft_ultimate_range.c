/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 11:42:50 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/20 14:26:07 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if(!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
		return (i);
}

int main()
{	
	int *tab;
   	int r = ft_ultimate_range(&tab, 5, 15);
	int i = 0;
	while (i < r)
	{
	printf("%d", tab[i]);
	i++;
	}
	return(0);
}
