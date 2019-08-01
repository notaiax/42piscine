/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:20:39 by migriver          #+#    #+#             */
/*   Updated: 2019/07/31 23:32:30 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <all.h>

void	bsq_expand_box(t_box *cb, t_map_info *mi)
{
	int has_obs;

	has_obs = 0;
	while (!(has_obs = bsq_has_obstacle(cb, mi)) &&
		(cb->x + cb->size < mi->columns && cb->y + cb->size < mi->lines))
		cb->size++;
	if (has_obs)
		cb->size--;
	return ;
}

t_box	bsq_find(char *map, t_map_info *mi)
{
	t_box	biggest;
	t_box	cb;
	int		i;

	biggest = bsq_new_box(mi->columns, mi->lines, 1);
	if (mi->obstacles == (void *)0)
	{
		i = (mi->lines < mi->columns) ? mi->lines : mi->columns;
		biggest = bsq_new_box(0, 0, i);
		return (biggest);
	}
	cb = bsq_new_box(0, 0, 1);
	i = -1;
	while (map[++i] != '\0')
	{
		if (map[i] == '\n')
			continue;
		bsq_expand_box(&cb, mi);
		if (cb.size > biggest.size)
			biggest = cb;
		cb = bsq_itoxy(i, mi->columns + 1);
		cb.size = biggest.size;
	}
	return (biggest);
}

int		bsq_has_obstacle(t_box *cb, t_map_info *mi)
{
	t_obstacle *obs;

	obs = mi->obstacles;
	while (obs != (void *)0)
	{
		if (obs->x >= cb->x && obs->x <= cb->x + cb->size - 1 &&
				obs->y >= cb->y && obs->y <= cb->y + cb->size - 1)
			return (1);
		obs = obs->next;
	}
	return (0);
}
