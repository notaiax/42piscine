/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:26:55 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:45:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_x_times(int n, char c)
{
	int i = 0;
	
	while (i < n)
	{	
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i = 0;
	char n = '\n';
	char c;

	if (argc - 1 != 1)
	{
		write(1, &n, 1);
		return (0);
	}
	while (argv[1][i] != 0)
	{
		c = argv[1][i];
		if (c >= 'a' && c <= 'z')
			print_x_times(c - 'a' + 1, c);
		else if (c >= 'A' && c <= 'Z')
			print_x_times(c - 'A' + 1, c);
		else
			write(1, &c, 1);
		i++;;
	}
	write(1, &n, 1);
	return (0);
}
