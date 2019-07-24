/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:51:02 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 20:44:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = octet;
	int bin_rev = 0;
	int char_rev = 0;
	int power = 1;
	int count = 0;
	
	if (octet == 0)
		return (0);

	while (i > 1)
	{
		bin_rev += i % 2;
		bin_rev *= 10;
		i = i / 2;
		count++;
	}
	bin_rev++;

	while (count < 7)
	{
		bin_rev *= 10;
		count++;
	}

	count = 0;
	while (bin_rev != 0)
	{
		char_rev += power * (bin_rev % 10);
		power *= 2;
		bin_rev /= 10;
	}
	octet = char_rev;
	return octet;
}
