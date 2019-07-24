/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:47:35 by migriver          #+#    #+#             */
/*   Updated: 2019/07/23 03:43:37 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "atoi.h"
#include "doop.h"
#include "putnbr.h"

int	main(int argc, char **argv)
{
	int n1;
	int n2;

	if (argc < 4)
		return (error(1, "\n"));
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (argv[2][0] == '/' && n2 == 0)
		return (error(1, "Stop : division by zero\n"));
	if (argv[2][0] == '%' && n2 == 0)
		return (error(1, "Stop : modulo by zero\n"));
	ft_putnbr(doop(n1, argv[2][0], n2));
	ft_putchar('\n');
	return (0);
}
