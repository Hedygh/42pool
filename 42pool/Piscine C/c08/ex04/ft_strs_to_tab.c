/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 01:10:34 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/23 16:22:46 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char					*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *par;

	i = 0;
	if (!(par = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
