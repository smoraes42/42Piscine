/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:03:31 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 15:06:52 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write(1,&n,1);
		n++;
	}
	write(1,"\n",1);
	return (0);
}
