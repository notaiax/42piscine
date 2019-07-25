/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:23:17 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/24 13:22:46 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;

struct s_list{
	char *str;
	t_list *next;
};

t_list	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
