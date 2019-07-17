/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:01:52 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/14 18:14:00 by shhe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_line(int x, char first, char mid, char end)
{
	ft_putchar(first);
	while ((x - 2) > 0)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	print_line(x, 'A', 'B', 'A');
	while ((y - 2) > 0)
	{
		print_line(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
	{
		print_line(x, 'C', 'B', 'C');
	}
	return (0);
}
