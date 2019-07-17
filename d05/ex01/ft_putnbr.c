/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:23:01 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 19:52:53 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check_min_int(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		return (147483648);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;

	nb = check_min_int(nb);
	i = 0;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = (nb - (nb % 10)) / 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(str[i - 1]);
		i--;
	}
}
