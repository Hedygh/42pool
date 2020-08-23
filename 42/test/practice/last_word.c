/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:09:56 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/23 14:59:22 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
			{
				if (((str[i] == ' ') || (str[i] == '\t')) && str[i+1] >= 32 && str[i+1] <= 126)
				j = i + 1;
				i++;
			}
	while (str[j] >= 32 && str[i] <= 126)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_last_word(av[1]);
	}
	write (1,"\n", 1);
	return (0);
}
