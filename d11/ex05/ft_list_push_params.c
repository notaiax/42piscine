/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:37:05 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 22:17:02 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*list_top;
	int		i;

	list_top = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		list = list_top;
		list_top = ft_create_elem(av[i]);
		list_top->next = list;
		i++;
	}
	return (list_top);
}
