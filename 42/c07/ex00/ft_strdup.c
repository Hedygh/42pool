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
	char *dest;

	i = 0;
		while (src[i])
		{
			i++;
		}
	if(!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	int j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j ++;
	}
	printf("%s", dest);
	free(dest);
	return (0);
}

int main()
{
	char src [] = "hello";
	ft_strdup(src);
	return(0);
}
