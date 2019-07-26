/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:21:29 by migriver          #+#    #+#             */
/*   Updated: 2019/07/25 21:12:49 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H
# include <errno.h>
# include <unistd.h>
# include <sys/types.h>
# define BUFSIZE (1024 * 29)

ssize_t	ft_pipe(int ifd, int ofd);
int		ft_puterror(int errn, char *msg);
int		ft_putsyserror(int errn);

ssize_t	ft_pipe(int ifd, int ofd)
{
	char	buf[BUFSIZE + 1];
	ssize_t	wb;
	ssize_t	rb;

	wb = 0;
	while ((rb = read(ifd, buf, BUFSIZE)) > 0)
		wb += write(ofd, buf, rb);
	return (wb);
}

int		ft_puterror(int errn, char *msg)
{
	int i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(2, &msg[i], 1);
		i++;
	}
	return (errn);
}

int		ft_putsyserror(int errn)
{
	char *msg;

	msg = "";
	if (errn == EACCES)
		msg = "Permission denied\n";
	else if (errn == EISDIR)
		msg = "Is a directory\n";
	else if (errn == ENOENT)
		msg = "No such file or directory\n";
	return (ft_puterror(errn, msg));
}
#endif
