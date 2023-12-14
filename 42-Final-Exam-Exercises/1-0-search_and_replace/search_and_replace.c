/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:37:50 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/14 02:32:42 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//void	ft_putstr(char **argv)
//{
//	int ind;
//
//	ind = 0;
//	while (argv[1][ind] != '\0')
//		write(1,&argv[1][ind++],1);
//}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	int ind;
	int lgt_a;
	int lgt_b;

	ind = 0;
	lgt_a = 0;
	lgt_b = 0;
	/*while(argv[2][lgt_a] != '\0')
		lgt_a++;
	while(argv[3][lgt_b] != '\0')
		lgt_b++;
	*/
	lgt_a = ft_strlen(argv[2]);
	lgt_b = ft_strlen(argv[3]);
	
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (lgt_a == 1 && lgt_b == 1)
	{
		while (argv[1][ind] != '\0')
		{
			if (argv[1][ind] == argv[2][0])
				argv[1][ind] = argv[3][0];

			write(1,&argv[1][ind],1);

			ind++;
		}
	}

	//write(1, "\n", 1);
	return (0);
}
