/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:37:12 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/13 01:02:05 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{

	char ind;
	char t_prn;

	ind = 'z';
	t_prn = '0';
	while (ind >= 'a')
	{
		if (ind % 2 == 1)
		{
			t_prn = ind - 32;
			write(1, &t_prn, 1);
		}
		else
			write(1, &ind, 1);
		ind--;
	}
	return (0);
}
 
