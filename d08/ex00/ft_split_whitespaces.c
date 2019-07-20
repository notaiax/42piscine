/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:47:52 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/19 17:08:55 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		special_char(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	**pointer_malloc(char *str)
{
	char	**words;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != 0)
	{
		if (special_char(str[i]) == 1)
		{
			i++;
			continue ;
		}
		while (special_char(str[i]) == 0 && str[i] != 0)
			i++;
		len++;
	}
	words = (char**)malloc(sizeof(*words) * (len + 1));
	return (words);
}

char	**double_pointer_malloc(char *str)
{
	char	**words;
	int		i;
	int		len;
	int		words_len;

	words = pointer_malloc(str);
	i = 0;
	words_len = 0;
	while (str[i] != 0)
	{
		if (special_char(str[i]) == 1)
		{
			i++;
			continue ;
		}
		len = 0;
		while (special_char(str[i]) == 0 && str[i] != 0)
		{
			i++;
			len++;
		}
		words[words_len] = (char*)malloc(sizeof(**words) * (len + 1));
		words_len++;
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		r;
	int		c;
	char	**words;

	words = double_pointer_malloc(str);
	i = 0;
	c = 0;
	while (str[i] != 0)
	{
		if (special_char(str[i]) == 1)
		{
			i++;
			continue ;
		}
		r = 0;
		while (special_char(str[i]) == 0 && str[i] != 0)
		{
			words[c][r++] = str[i++];
		}
		words[c][r] = '\0';
		c++;
	}
	words[c] = 0;
	return (words);
}
