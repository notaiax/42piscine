/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 11:20:44 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_putchar(char c);
void	ft_putnbr(int nb);
void ft_putstr(char *str);
void ft_strcpy(char *dest,char *src);

int		main(void)
{
	char src[] = "hola andy";
	char dest[] = "hola katee69";
	
	ft_putstr(src);
	ft_putstr("\n");
	ft_putstr(dest);
	ft_putstr("\n");
	ft_strcpy(dest, src);
	ft_putstr(dest);

	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
