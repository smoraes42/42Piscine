/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:40:19 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 13:44:21 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = 1;
	if (nb == 1 || nb == 0)
		return (fact);
	else if (nb < 0)
		return (0);
	else
		while (i <= nb)
			fact *= i++;
	return (fact);
}
/*
int main(void)
{
	int 	x;

	x = ft_interactive_factorial(-1);
	printf("%d", x);
	return (0);
}
*/
