/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 20:17:34 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_putchar(char c);
int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n%d\n%d\n",ft_atoi("hola"),atoi("		  \n++1tyu"),atoi("  \n\v\f\r++ 12l3"));
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
