/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/12 11:27:53 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void);

void 	ft_ft(int *nbr);

int		ft_putchar(int c);		

int		main(void)
{
	int	a = 5;
	int	*ptra;

	ptra = &a;
	ft_putchar(a);
	printf("\n");
	ft_ft(ptra);
	ft_putchar(a);
	return (0);
}

int		ft_putchar(int c)
{
	printf("%d",c);
	return (0);
}
