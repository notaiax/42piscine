/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:55:05 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/26 16:47:35 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void *)0)
		return ;
	applyf(root);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
