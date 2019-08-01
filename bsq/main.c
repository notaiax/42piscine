/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:00:35 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/31 22:26:38 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <all.h>

int		bsq(char *map)
{
	t_map_info	mi;
	t_box		biggest;

	mi = bsq_parse(&map);
	if (mi.lines == 0)
		return (ft_puterror(1, "map error\n"));
	biggest = bsq_find(map, &mi);
	bsq_print_square(map, &biggest, &mi);
	return (0);
}

int		main(int argc, char **argv)
{
	char		*str;
	int			i;

	if (argc < 2)
		return (bsq(bsq_read_file("-")));
	i = 0;
	while (++i < argc)
	{
		if (i != 1)
			ft_putstr("\n");
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			str = bsq_read_file("-");
		else
			str = bsq_read_file(argv[i]);
		bsq(str);
	}
	return (0);
}
