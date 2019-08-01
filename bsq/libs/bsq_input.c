/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 22:29:28 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/31 23:37:27 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <all.h>
#define BUF_SIZE 4096

char		*bsq_read_file(char *filename)
{
	int		fd;
	int		ret;
	int		fsize;
	char	*buf;

	if (filename[0] == '-' && filename[1] == '\0')
		return (bsq_read_from_stdin());
	buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (bsq_read_file_error("", filename, "open() error\n"));
	fsize = 0;
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		fsize += ret;
	close(fd);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (bsq_read_file_error("", filename, "open() error\n"));
	buf = (char*)malloc(sizeof(*buf) * (fsize + 1));
	ret = read(fd, buf, fsize + 1);
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

char		*bsq_read_from_stdin(void)
{
	int		fd;
	int		ret;
	int		fsize;
	char	*buf;

	fd = open("-", O_CREAT | O_TRUNC | O_RDWR);
	buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE));
	fsize = 0;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		write(fd, buf, ret);
		fsize += ret;
	}
	close(fd);
	fd = open("-", O_RDWR);
	buf = (char*)malloc(sizeof(*buf) * (fsize + 1));
	ret = read(fd, buf, fsize + 1);
	buf[ret] = '\0';
	return (buf);
}
