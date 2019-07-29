/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfan <jfan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:14:00 by jfan              #+#    #+#             */
/*   Updated: 2019/07/28 20:34:04 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		printout(int x_iter, int y_iter, int x, int y)
{
	if (x_iter == 0 && y_iter == 0)
		ft_putchar('/');
	else if (x_iter == 0 && y_iter == y - 1)
		ft_putchar('\\');
	else if (x_iter == 0 && y_iter == y - 1)
		ft_putchar('*');
	else if (x_iter == 0 || (x_iter == x - 1 && y_iter > 0 && y_iter < y - 1))
		ft_putchar('*');
	else if (y_iter == 0 && x_iter > 0 && x_iter < x - 1)
		ft_putchar('*');
	else if (y_iter == y - 1 && x_iter > 0 && x_iter < x - 1)
		ft_putchar('*');
	else if (x_iter == x - 1 && y_iter == 0)
		ft_putchar('\\');
	else if (x_iter == x - 1 && y_iter == y - 1)
		ft_putchar('/');
	else
		ft_putchar(' ');
	return (0);
}

int		rush(int a, int b)
{
	int x_iter;
	int y_iter;

	x_iter = 0;
	y_iter = 0;
	while (y_iter < b)
	{
		while (x_iter < a)
		{
			printout(x_iter, y_iter, a, b);
			x_iter++;
		}
		x_iter = 0;
		y_iter++;
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
