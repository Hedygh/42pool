/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:18:43 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/14 15:10:55 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int i;
	unsigned int k;

	j = 0;
	i = 0;
	k = 0;
	while (src[k])
		k++;
	while (dest[i])
		i++;
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (size <= 0)
		return (k);
	dest[i + j] = '\0';
	return (i + j);
}
