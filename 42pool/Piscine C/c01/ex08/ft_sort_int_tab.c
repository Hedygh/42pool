/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 22:35:55 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/17 21:33:34 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
int main()
{
	int tab[] = { 1, 4 , 6, 5, 0, 9, 2, 4, 7, 2};
	ft_sort_int_tab(tab, 10);
	int i = 0; 
	while(i <= 10)
	{
		printf("%d", tab[i]);
		i++;
	}
}
