/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:09:46 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/13 19:29:50 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char **argv, int argc)
{
	int 	ind;
	char	count;

	ind = 0;
	count = 'a';
	while (argv[argc][ind] != '\0')
	{
		if (argv[argc][ind] >= 97 && argv[argc][ind] <= 122)
		{
			count = argv[argc][ind] - 96;
			
			while (count)
			{
				write(1,&argv[argc][ind],1);
				--count;
			}
		}
		
		else
			write(1,&argv[argc][ind], 1);
		
		ind++;
	}
}

int main(int argc, char **argv)
{
	if (argc !=2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv, argc - 1);
	write(1,"\n",1);
	return (0);
}
