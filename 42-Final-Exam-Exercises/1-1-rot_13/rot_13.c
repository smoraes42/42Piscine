/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 02:33:45 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/14 02:46:25 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int ind;

	ind = 0;
	while (argv[1][ind] != '\0')
	{
		if (argv[1][ind] >= 'a' && argv[1][ind] <= 'z')
			if(argv[1][ind] > 'n')
				argv[1][ind] == 'a'
	}

	return (0);
}
