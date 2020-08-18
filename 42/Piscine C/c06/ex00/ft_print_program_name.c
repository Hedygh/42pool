/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:24:58 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/18 18:26:24 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		{
		write(1, &str[i], 1);
		i++;
		}
}
int		main(int ac, char **av)
{
	if(ac == 1)
	{
		ft_putstr(av[0]);
	}
	write(1, "\n", 1);
}
