/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puterrno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 01:44:34 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 02:39:44 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int		ft_puterrno(int errno_num)
{
	char *error_info;

	error_info = "";
	if (errno_num == EACCES)
		error_info = "Permission denied\n";
	if (errno_num == EISDIR)
		error_info = "Is a directory\n";
	if (errno_num == ENOENT)
		error_info = "No such file or directory\n";
	return (ft_puterror(error_info));
}
