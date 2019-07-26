/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:18:10 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 21:06:16 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "tools.h"

int	main(int argc, char **argv)
{
	int i;
	int fd;

	if (argc < 2)
		ft_pipe(0, 1);
	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			ft_puterror(1, argv[0]);
			ft_puterror(1, ": ");
			ft_puterror(1, argv[i]);
			ft_puterror(1, ": ");
			ft_putsyserror(errno);
			continue;
		}
		ft_pipe(fd, 1);
		close(fd);
	}
	return (0);
}
