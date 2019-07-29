/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfan <jfan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:53:40 by jlin              #+#    #+#             */
/*   Updated: 2019/07/28 20:33:41 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		printout(int i, int j, int x, int y)
{
	if ((i == 0 || i == x - 1) && (j == 0))
	{
		ft_putchar('A');
	}
	else if (((i == 0) || (i == x - 1)) && j == y - 1)
	{
		ft_putchar('C');
	}
	else if ((j == 0) || (j == y - 1) || i == 0 || i == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
	return (0);
}

int		rush(int a, int b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < b)
	{
		while (i < a)
		{
			printout(i, j, a, b);
			i++;
		}
		i = 0;
		j++;
		ft_putchar('\n');
	}
	return (0);
}

int		main(int argc, char **argv)
{
	(void)argc;
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
