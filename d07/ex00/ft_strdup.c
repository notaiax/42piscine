/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:41:52 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/18 17:12:36 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;

	src_length = ft_strlen(src);
	dest = malloc(sizeof(*dest) * (src_length + 1));
	if (dest == (void *)0)
		return (dest);
	dest = (char*)dest;
	ft_strcpy(dest, src);
	return (dest);
}
