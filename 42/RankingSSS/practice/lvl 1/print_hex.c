/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 13:00:04 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 13:20:54 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_hex(int nb, char *str)
{
	int t = 0;
	long nbr;
	
	nbr = nb;
	while (str[t])
		t++;
	if (nbr == 0)
		write (1, &str[0], 1);
	if (nbr < 0)
	{
		write (1, "-", 1);

	if (nbr > 
}
int main(int ac, char **av)
{
	char *base = "0123456789abcdef";
	if (ac == 2)
		{
			ft_print_hex(av[1], base);
		}
	write(1, "\n", 1);
	return (0);
}
