/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:05:24 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/08 14:26:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl_tmp;
	char	c[10];
	short	i;

	nbl_tmp = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl_tmp < 0)
	{
		nbl_tmp *= -1;
		write(1, "-", 1);
	}
	while (nbl_tmp % 10)
	{
		c[i] = (nbl_tmp % 10) + 48;
		nbl_tmp = nbl_tmp / 10;
		i++;
	}
	while (i-- > 0)
		write(1, &c[i], 1);
}

int main(void)
{
	ft_putnbr(4-42);
	return (0);
}
