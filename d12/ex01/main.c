/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:44:59 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 00:05:19 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int	main(int argc, char **argv)
{
	int i;
	int fd;

	if (argc < 2)
		ft_in_out(0, 1);
	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == 0)
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			ft_puterror(argv[0]);
			ft_puterror(": ");
			ft_puterror(argv[i]);
			ft_puterror(": ");
			ft_puterrno(errno);
			continue ;
		}
		ft_in_out(fd, 1);
		close(fd);
	}
	return (0);
}
