/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:43:38 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/25 16:45:06 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:*/

#include <stdlib.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;
	while (str[j + 1] != '\0')
		j++;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return(str);
}
char	*ft_itoa(int nbr)
{
	int i = 0;
	char *str;
	int sign;
	if(!(str = malloc(sizeof(char) * 12)))
		return (0);
	if (nbr == -2147483648)
		return("-2147483648");
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
	{
	nbr = -nbr;
	sign = -1;
	}
	while (nbr)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	if(sign == -1)
	str[i] = '-';
	return (ft_strrev(str));
}
int main()
{
	int nb = 0;
	printf("%s", ft_itoa(nb));
	return(0);
}
