/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 22:29:28 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/31 22:08:22 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <unistd.h>
#include <all.h>
#define BUF_SIZE 30000

char		*bsq_read_file(char *filename)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE + 1));
	if (filename[0] == '-' && filename[1] == '\0')
		fd = 0;
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (bsq_read_file_error("", filename, "open() error\n"));
	}
	ret = read(fd, buf, BUF_SIZE);
	if (ret == -1)
		return (bsq_read_file_error("", filename, "read() error\n"));
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

char		*bsq_read_file_error(char *value, char *filename, char *str)
{
	ft_puterror(1, filename);
	ft_puterror(1, ": ");
	ft_puterror(1, str);
	return (value);
}
