/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:29:40 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 23:35:22 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	if (!begin_list)
		return (void*)0;
	i = 0;
	while (i < nbr && begin_list != 0)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
