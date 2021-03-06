/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:32:39 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 11:21:54 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = lenght;
	}
	while (j < lenght - 1)
	{
		if (f(tab[j], tab[j + 1]) <= 0)
			j++;
		else
			j = lenght;
	}
	if ((i == lenght - 1) || (j == lenght - 1))
		return (1);
	else
		return (0);
}
