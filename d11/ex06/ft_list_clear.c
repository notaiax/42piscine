/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:18:15 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 23:24:02 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;

	if (*begin_list == 0)
		return ;
	next = (*begin_list)->next;
	while (next)
	{
		free(*begin_list);
		*begin_list = next;
		next = (*begin_list)->next;
	}
	free(*begin_list);
	free(next);
	*begin_list = NULL;
}
