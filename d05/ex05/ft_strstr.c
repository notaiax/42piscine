/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 23:15:28 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 23:43:49 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int pos;
	int i;
	int j;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	j = 0;
	pos = 0;
	while (str[i] != 0)
	{
		if (str[i] == str[j] && j == 0)
			pos = i;
		if (str[i] == str[j])
			j++;
		if (str[j] == 0)
			return (str + pos);
		if (j > 0 && str[i] != str[j])
			j = 0;
		i++;
	}
	return (0);
}
