/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:45:43 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/18 17:58:46 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*range;
	int				inc_min;
	unsigned int	length;
	unsigned int	i;

	if (min >= max)
		return ((void *)0);
	inc_min = min;
	i = 0;
	length = (unsigned int)(max - min);
	range = (int*)malloc(sizeof(*range) * length);
	while (inc_min < max)
	{
		range[i] = inc_min;
		inc_min++;
		i++;
	}
	return (range);
}
