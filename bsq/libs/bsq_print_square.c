/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_print_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:21:37 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/31 21:07:43 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <all.h>

void	bsq_print_square(char *map, t_box *biggest, t_map_info *mi)
{
	int i;
	int	x;
	int y;
	int current;

	x = biggest->x;
	while (x < (biggest->x) + (biggest->size))
	{
		y = biggest->y;
		while (y < (biggest->y) + (biggest->size))
		{
			current = bsq_xytoi(x, y, (mi->columns) + 1);
			map[current] = mi->full;
			y++;
		}
		x++;
	}
	i = 0;
	while (map[i] != '\0')
	{
		ft_putchar(map[i++]);
	}
	return ;
}
