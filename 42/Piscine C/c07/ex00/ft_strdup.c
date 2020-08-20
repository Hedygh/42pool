/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Updated: 2020/08/19 16:50:44 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	int j;
	char *dest;

	i = 0;
		while (src[i])
		{
			i++;
		}
	if(!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j ++;
	}
	dest[j] = '\0';
	return (dest);
}

int main()
{
	char src [] = "hello";
	printf("%s", ft_strdup(src));
	return(0);
}
