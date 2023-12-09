/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:42:29 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 17:19:02 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft__printf(char *arr)
{
	int	ind;

	ind = 0;
	while (arr[ind] != '\0')
		ind++;
	write(1,arr,ind);
}

void ft_putnbr_base(int nbr, char *base)
{

	(void)*base;
	(void)nbr;
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//if (argc != 2)
	//	return (0);
	//else
	//{
		ft__printf("test");
	//}	
	return (0);
}
