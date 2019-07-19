/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:36:34 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/18 23:34:22 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_argv_len(int argc, char **argv)
{
	int len;
	int i;
	int j;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			len++;
			j++;
		}
		i++;
	}
	return (len + argc - 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		length;
	char	*str;
	int		i;
	int		j;

	length = get_argv_len(argc, argv);
	str = (char*)malloc(sizeof(*str) * length);
	i = 1;
	length = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			str[length] = argv[i][j];
			length++;
			j++;
		}
		if (i != argc - 1)
			str[length] = '\n';
		length++;
		i++;
	}
	return (str);
}
