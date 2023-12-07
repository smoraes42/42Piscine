/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <smoraes-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:17:07 by smoraes-          #+#    #+#             */
/*   Updated: 2023/11/26 21:50:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_horizontal(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
		{
			ft_putchar(middle);
		}
		if (x == 0)
		{
			ft_putchar(right);
		}
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char wall)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i++)
		{
			ft_putchar(' ');
		}
		if (x > 1)
		{
			ft_putchar(wall);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		print_horizontal(x, 'o', '-', 'o');
	}
	print_vertical(x, y, '|');
	if (y >= 2)
	{
		print_horizontal(x, 'o', '-', 'o');
	}
}
