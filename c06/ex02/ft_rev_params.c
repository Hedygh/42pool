/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 23:15:06 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/19 15:23:31 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str[i] == '\0')
		write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;
	int tmp;

	i = 0;
	tmp = ac - 1;
	if (ac > 1)
	{
		while (tmp > i)
		{
			ft_putstr(av[tmp]);
			tmp--;
		}
	}
	return (0);
}
