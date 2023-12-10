/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:51:23 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 17:33:00 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	it;

	it = nb;
	if (nb <= 1)
		return (0);
	while (it-- > 2)
	{
		if (nb % it == 0)
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	int i = 0;
	while (i <= 100)
	{
		int x =ft_is_prime(i);
		if (x == 1)
			printf("%d - Is prime\n", i); 
		else
			printf("%d - Is NOT ! prime\n",i); 
		i++;
	}

	return (0);
}
*/
