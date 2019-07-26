/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:25:58 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 01:43:40 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE (29 * 1024)

int		ft_puterror(char *str);
ssize_t	ft_in_out(int in_fd, int out_fd);
int		ft_puterrno(int errno_num);

#endif
