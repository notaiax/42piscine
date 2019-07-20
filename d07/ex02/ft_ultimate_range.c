/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:09:38 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/18 18:37:33 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int length;
	unsigned int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = (unsigned int)(max - min);
	*range = (int*)malloc(sizeof(**range) * length);
	while (i < length)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (length);
}
