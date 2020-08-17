/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:41:49 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/12 18:23:27 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				(!(str[i - 1] >= 'a' && str[i - 1] <= 'z')) &&
				(!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')) &&
				(!(str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
