/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:31:36 by migriver          #+#    #+#             */
/*   Updated: 2019/07/17 23:30:38 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_arrsort(int n, char **str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	ft_arrsort(argc - 1, &argv[1]);
	i = 1;
	while (i < argc)
	{
		str = argv[i];
		j = -1;
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

char	**ft_arrsort(int n, char **str)
{
	int		i;
	int		j;
	char	*x;

	i = -1;
	while (++i < n - 1)
	{
		j = i - 1;
		while (++j < n - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) <= 0)
				continue ;
			x = str[j];
			str[j] = str[j + 1];
			str[j + 1] = x;
			i = -1;
			break ;
		}
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
