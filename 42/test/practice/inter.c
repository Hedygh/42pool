/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:53:27 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/25 13:25:58 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if(str[i] == c)
			return(0);
				i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i = 0;
	int j; 
	while (s1[i])
	{
		j = 0;
		if(ft_check(s1, s1[i], i) == 1)
		{
			while (s2[j])
			{
				if(s1[i] == s2[j] && ft_check(s2,s2[j], j) == 1)
				write(1, &s1[i], 1);
				j++;
			}			
		}
		i++; 
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		ft_inter(av[1],av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
