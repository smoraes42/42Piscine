/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anibarz- <anibarz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:29:29 by anibarz-          #+#    #+#             */
/*   Updated: 2023/11/26 21:40:24 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while ((i <= y) && (y <= 2000))
	{
		j = 1;
		while ((j <= x) && (x <= 2000))
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				ft_putchar(111);
			else if (i == 1 || i == y)
				ft_putchar(45);
			else if (j == 1 || j == x)
				ft_putchar(124);
			else
				ft_putchar(32);
			if (j == x)
				ft_putchar(10);
			j++;
		}
		i++;
	}
}
