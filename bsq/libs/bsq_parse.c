/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:07:31 by migriver          #+#    #+#             */
/*   Updated: 2019/07/31 21:57:41 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <all.h>

void		bsq_add_obstacle(t_map_info *mi, int i)
{
	t_box		box;
	t_obstacle	*obs;

	obs = bsq_new_obstacle(i, 0);
	if (mi->columns > 0)
	{
		box = bsq_itoxy(i, mi->columns + 1);
		obs->x = box.x;
		obs->y = box.y;
	}
	if (mi->obstacles == (void *)0)
	{
		mi->obstacles = obs;
		mi->last_obs = obs;
		return ;
	}
	mi->last_obs->next = obs;
	mi->last_obs = obs;
	return ;
}

t_map_info	bsq_get_map_info(char **input)
{
	t_map_info	mi;
	t_map_info	errmi;
	int			i;

	errmi.lines = 0;
	i = 0;
	while ((*input)[i] != '\n' && (*input)[i] != '\0')
		i++;
	if (i < 4)
		return (errmi);
	mi = bsq_new_map_info(0, (*input)[i - 3], (*input)[i - 2], (*input)[i - 1]);
	(*input)[i - 3] = '\0';
	mi.lines = ft_atoi(*input);
	if (mi.lines < 1)
		return (errmi);
	*input += i + 1;
	return (mi);
}

t_map_info	bsq_parse(char **input)
{
	t_map_info	mi;
	t_map_info	errmi;
	int			i;

	i = -1;
	errmi.lines = 0;
	mi = bsq_get_map_info(input);
	while ((*input)[++i] != '\0')
	{
		if ((*input)[i] == '\n')
		{
			if (mi.columns == -1)
				mi.columns = i;
			else if ((i + 1) % (mi.columns + 1) != 0)
				return (errmi);
			continue;
		}
		if ((*input)[i] != mi.empty && (*input)[i] != mi.obstacle)
			return (errmi);
		if ((*input)[i] == mi.obstacle)
			bsq_add_obstacle(&mi, i);
	}
	return (mi);
}
