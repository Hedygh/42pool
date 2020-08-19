/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:24:07 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/18 19:24:16 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int find;

	find = nb;
	if (nb <= 2)
		return (2);
	if (nb == 2)
		return (nb);
	while (find)
	{
		if (ft_check_prime(find) == 1)
			return (find);
		find++;
	}
	return (0);
}
