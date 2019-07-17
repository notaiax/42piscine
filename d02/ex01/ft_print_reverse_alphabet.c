/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/11 22:50:07 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	i = z;
	while (i >= a)
	{
		ft_putchar(i);
		i = i - 1;
	}
}
