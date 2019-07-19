/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 22:28:33 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/17 23:50:11 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_args(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}

void	ft_swap(char *str1, char *str2)
{
	char *tmp;

	ft_strcpy(tmp, str1);
	ft_strcpy(str1, str2);
	ft_strcpy(str2, tmp);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc - 2)
	{
		i = j;
		while (i < (argc - 2))
		{
			if (ft_strcmp(*(argv + i), *(argv + i + 1)) < 0)
				ft_swap(*(argv + i), *(argv + i + 1));
			i++;
		}
		j++;
	}
	print_args(argc, argv);
}
