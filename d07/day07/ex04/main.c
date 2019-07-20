/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 03:45:48 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/19 16:19:44 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	**ft_split_whitespaces(char *str);

int main()
{
	int i = 0;
	char *str = "hola   que tal\nandan";
	char **words = ft_split_whitespaces(str);
	while(words[i][0] != 0){
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
