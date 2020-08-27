/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 20:36:21 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 11:38:44 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_epur_str(char *str)
{
	int i = 0;
	int space = 0;

	while ((str[i] == ' ') || (str[i] == '\t'))
		i++;
	while (str[i])
	{
		if((str[i] == ' ') || (str[i] == '\t'))
			space = 1;
		if(str[i] != ' ' && str[i] != '\t')
		{
			if(space == 1)
			{
				write(1, " ", 1);
				space = 0;
			}
			write(1, &str[i], 1);
		}
		i++; 
	}
	write(1, "\n", 1);
	return (0);
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_epur_str(av[1]);
	}
	return (0);
}	
