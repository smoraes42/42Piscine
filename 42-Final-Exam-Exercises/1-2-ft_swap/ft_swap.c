/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:32:15 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/15 00:40:27 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a, b;
	a = 10;
	b = 20;
	printf("a = %d, b = %d \n", a, b);

	ft_swap(&a, &b);
	printf("a = %d, b = %d \n", a, b);
	return (0);
}
