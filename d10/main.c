/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:53:52 by afaura-v          #+#    #+#             */
/*   Updated: 2019/07/23 22:05:01 by afaura-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void printanum(int a)
{
	printf("NUM: ");
	printf("%d\n", a);

}

int main()
{
	int a[8] = {1,4,6,3,6,2,6,75};
	int *ptr_a = &a;
	void (*f)(int) = &printanum;
	ft_foreach(ptr_a, 8, f );
	return 0;
}
