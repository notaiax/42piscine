/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:47:44 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/16 21:10:52 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				zero_found;

	zero_found = 0;
	i = 0;
	while (i < n)
	{
		if (*(src + i) == 0)
		{
			zero_found = 1;
		}
		if (zero_found == 1)
		{
			*(dest + i) = 0;
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	return (dest);
}
