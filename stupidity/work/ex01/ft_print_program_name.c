/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:04:50 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/17 22:09:27 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;

	if (argc < 1)
	{
		return (-1);
	}
	i = 0;
	while (argv[0][i] != 0)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
