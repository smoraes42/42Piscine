/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:53:48 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 14:59:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char n;

	n = '9';
	while (n >= '0')
	{
		write(1,&n,1);
		n--;
	}
	write(1,"\n",1);
	return (0);
}
