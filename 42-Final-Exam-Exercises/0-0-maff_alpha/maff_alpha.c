/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:37:34 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 16:56:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char it;
	char mays;

	it = 'a';
	while (it <= 'z')
	{
		if (it % 2 == 0)
		{
			mays = (it - 32);
			write(1,&mays,1);
		}
		else
			write(1,&it,1);
		it++;
	}
	write(1, "\n", 1);
	return (0);
}
