/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop_opps.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migriver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 02:31:09 by migriver          #+#    #+#             */
/*   Updated: 2019/07/23 03:45:52 by migriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_OPPS_H
# define DOOP_OPPS_H

int	ft_sub(int n1, int n2);
int	ft_add(int n1, int n2);
int	ft_mul(int n1, int n2);
int	ft_div(int n1, int n2);
int	ft_mod(int n1, int n2);

int	ft_sub(int n1, int n2)
{
	return (n1 - n2);
}

int	ft_add(int n1, int n2)
{
	return (n1 + n2);
}

int	ft_mul(int n1, int n2)
{
	return (n1 * n2);
}

int	ft_div(int n1, int n2)
{
	return (n1 / n2);
}

int	ft_mod(int n1, int n2)
{
	return (n1 % n2);
}
#endif
