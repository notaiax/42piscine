/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:15:36 by migriver          #+#    #+#             */
/*   Updated: 2019/07/23 03:37:37 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_H
# define ATOI_H

int	ft_is_space(char c);

int	ft_atoi(char *str)
{
	int		i;
	int		changed;
	char	sign;
	int		result;

	i = -1;
	changed = 0;
	sign = 0;
	result = 0;
	while (str[++i] != '\0')
	{
		if (changed == 0 && sign == 0 && (str[i] == '-' || str[i] == '+'))
			sign = str[i];
		else if (changed == 0 && sign == 0 && ft_is_space(str[i]) == 1)
			continue ;
		else if (str[i] < '0' || str[i] > '9')
			break ;
		else
		{
			result = result * 10 + (str[i] - 48);
			changed = 1;
		}
	}
	return (sign != '-') ? result : result * -1;
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
#endif
