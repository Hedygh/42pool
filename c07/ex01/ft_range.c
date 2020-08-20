/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 10:55:02 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/20 18:54:40 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if(min >= max)
		return (0);
	if(!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
int main()
{
	int *tab = ft_range(0, 3);
	int i = 0;

	while (i < 3)
	{
		printf("%d", tab[i]);
			i++;
	}	
}
