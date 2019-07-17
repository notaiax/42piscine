/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:17:11 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/13 20:30:24 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
