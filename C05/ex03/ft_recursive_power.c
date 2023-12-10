/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:13:53 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 16:07:40 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else if (power >= 2)
		return (nb * ft_recursive_power(nb, power -1));
	else
		return (0);
}
/*
int	main(void)
{
	int y = ft_recursive_power(2, 3);
	printf("%d", y);

	return (0);
	}
	*/
