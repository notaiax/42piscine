/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 03:22:03 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 14:40:45 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "stdlib.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *btree;

	btree = (t_btree*)malloc(sizeof(t_btree));
	btree->item = item;
	btree->right = 0;
	btree->left = 0;
	return (btree);
}
