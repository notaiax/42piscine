/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:48:41 by migriver          #+#    #+#             */
/*   Updated: 2019/07/23 03:45:40 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include "doop_opps.h"

int	doop(int n1, char sign, int n2);

int	doop(int n1, char sign, int n2)
{
	if (sign == '+')
		return (ft_add(n1, n2));
	else if (sign == '-')
		return (ft_sub(n1, n2));
	else if (sign == '*')
		return (ft_mul(n1, n2));
	else if (sign == '/')
		return (ft_div(n1, n2));
	else if (sign == '%')
		return (ft_mod(n1, n2));
	return (0);
}
#endif
