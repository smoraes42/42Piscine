/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:08:48 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/10 16:24:41 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	count;

	count = 0;
	if (nb == 2 || nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 1)
	{
		if (nb % 2 != 0)
			return (0);
		else
		{
			nb /= 2;
			count++;
		}
	}
	return (count);
}
/*
int main(void)
{
	int rt = ft_sqrt(4);
	printf("%d", rt);

	return (0);
}
*/
