/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:51:18 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 15:05:55 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
void	ft_putstr(char *str);

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}
