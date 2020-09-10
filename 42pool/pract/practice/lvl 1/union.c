/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:07:45 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/24 16:36:36 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_union(char *s1, char c, int index)
{
	int i = 0;
	while (s1[i] && i < index)
	{
		if(s1[i] == c)
			return(0);
		i++;
	}
	return (1);
}
int main(int ac,char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if(ft_union(av[1], av[1][i], i) == 1)
				write (1,&av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if((ft_union(av[2], av[2][i], i) == 1) && 
					ft_union(av[1], av[2][i], i) == 1)
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
