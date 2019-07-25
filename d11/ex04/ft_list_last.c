/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:30:50 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 22:49:43 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_last)
{	
	if (!begin_last)
		return (begin_last);
	while (begin_last->next)
		begin_last = begin_last->next;
	return (begin_last);
}
