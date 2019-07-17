/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/13 20:00:12 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int		ft_iterative_factorial(int i);

int		main(void)
{
	int a = ft_iterative_factorial(13);
	printf("%i",a);
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
