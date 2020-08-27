/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:18:43 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 14:50:41 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int src_size;
	unsigned int i;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	i = dest_size;
	if (dest_size <= size)
		return (src_size + size);
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest_size + src_size);
}
