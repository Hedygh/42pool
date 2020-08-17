/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:36:06 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/16 23:37:10 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_chkbase(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (base[i])
	{
		if ((base[i] == '-') || (base[i] == '+'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (i);
}

void			ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			t;

	nb = nbr;
	t = ft_chkbase(base);
	if (t != 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= t)
			ft_putnbr_base(nb / t, base);
		ft_putchar(base[nb % t]);
	}
}
