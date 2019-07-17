/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/11 23:45:15 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int		ft_putchar(char c);

int		main(void)
{
	ft_print_comb();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
