/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 23:02:23 by migriver          #+#    #+#             */
/*   Updated: 2019/07/31 00:07:24 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <all.h>

int		ft_putchar(char c)
{
	return (ft_putchar_to(1, c));
}

int		ft_putchar_to(int fd, char c)
{
	return (write(fd, &c, 1));
}

int		ft_puterror(int errn, char *str)
{
	ft_putstr_to(2, str);
	return (errn);
}

void	ft_putstr(char *str)
{
	ft_putstr_to(1, str);
	return ;
}

void	ft_putstr_to(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_to(fd, str[i]);
		i++;
	}
	return ;
}
