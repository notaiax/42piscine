/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:39:43 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/25 21:56:23 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (argc < 2)
		return (ft_puterror("File name missing.\n"));
	if (argc > 2)
		return (ft_puterror("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_puterror("No such file or directory\n"));
	while ((ret = read(fd, buf, BUF_SIZE)))
		write(1, buf, ret);
	if (close(fd) == -1)
		return (ft_puterror("close() error\n"));
	return (0);
}
