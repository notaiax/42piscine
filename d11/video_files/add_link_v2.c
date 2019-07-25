/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:11:15 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 15:54:27 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int	add_link(t_list **list, char *str)
{
	t_list *tmp;

	tmp = *list;
	*list = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
	{
		*list = tmp;
		return (1);
	}
	*list->str = str;
	*list->next = tmp;
	return (1);
}

int	int main(void)
{
	t_list *list;
	
	list = NULL;
	
	add_link(&list, "titi\n");
	print_list(list);
	return (0);
}
