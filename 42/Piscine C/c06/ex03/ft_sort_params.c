/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 23:46:32 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/19 18:36:08 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

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

void	ft_aff(int ac, char **av)
{
	int aff;

	aff = 1;
	while (aff < ac)
	{
		ft_putstr(av[aff]);
		aff++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = i + 1;
			while (j < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					tmp = av[i];
					av[i] = av[j];
					av[j] = tmp;
				}
				j++;
			}
			i++;
		}
		ft_aff(ac, av);
		return (0);
	}
}
