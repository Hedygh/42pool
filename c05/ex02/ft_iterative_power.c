/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:07:39 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/17 21:13:22 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	i = 1;
	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i <= power)
	{
	r = r * nb;
	i++;
	}
	return(r);
}
int main()
{
	printf("%d", ft_iterative_power(5, 5));
}
