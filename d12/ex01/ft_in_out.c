/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 00:44:22 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 02:39:34 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

ssize_t	ft_in_out(int in_fd, int out_fd)
{
	char	buf[BUF_SIZE + 1];
	ssize_t	write_bytes;
	ssize_t	read_bytes;

	write_bytes = 0;
	while ((read_bytes = read(in_fd, buf, BUF_SIZE)) > 0)
		write_bytes += write(out_fd, buf, read_bytes);
	return (write_bytes);
}
