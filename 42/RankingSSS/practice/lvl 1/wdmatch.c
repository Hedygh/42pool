/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 20:31:17 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/24 19:11:34 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/
#include <unistd.h>

int		check(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
//	while (s1[i])
//	{
		while(s2[j] && s1[i])
		{
			if (s1[i] == s2[j] && s1[i + 1] == '\0')
				return(1);
			if (s1[i] == s2[j])
			i = i + 1;
			j++;
		}
//	i++;
//	}
	return(0);
}
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 3)
	{
		while (av[1][i])
		{
		if(check(av[1], av[2]) == 1)
		write(1, &av[1][i],1);
		i++; 
		}
	}
	write(1, "\n", 1);
	return (0);
}
