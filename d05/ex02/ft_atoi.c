/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:47:38 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 20:27:51 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_res(char *str, int res, int i)
{
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

char	*rm_spc_chars(char *str)
{
	int i;

	i = 0;
	while (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t' ||
	*(str + i) == '\v' || *(str + i) == '\f' || *(str + i) == '\r')
	{
		i++;
	}
	return (str + i);
}

int		ft_atoi(char *str)
{
	int is_negative;
	int i;
	int res;

	str = rm_spc_chars(str);
	is_negative = 0;
	i = 0;
	res = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			is_negative = 1;
		i++;
	}
	if (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0';
		i++;
		res = get_res(str, res, i);
	}
	if (is_negative == 1)
		res *= -1;
	return (res);
}
