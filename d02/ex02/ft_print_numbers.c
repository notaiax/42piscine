/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:10:25 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/11 23:00:02 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	zero;
	char	nine;

	zero = '0';
	nine = '9';
	i = zero;
	while (i <= nine)
	{
		ft_putchar(i);
		i = i + 1;
	}
}
