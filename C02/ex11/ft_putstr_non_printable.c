/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 01:55:33 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 17:48:59 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//static void	print_hex(int np)
//{
//	char	*hex;
//
//	hex = "0123456789abcdef";
//	if (np > 16)
//	{
//		print_hex(np / 10);
//		print_hex(np % 10);
//	}
//	else
//		write(1, &hex[np], 1);
//}
//
//void	ft_putstr_non_printable(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i])
//	{
//		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
//		{
//			write(1, "\\", 1);
//			if (str[i] < 16)
//				write(1, "0", 1);
//			print_hex(str[i]);
//		}
//		else
//			write(1, &str[i], 1);
//		i += 1;
//	}
//}

void	ft_putstr_non_printable(char *str)
{
	int		a;
	int		b;
	int		i;
	char		*hxa;

	i = 0;
	hxa = "0123456789abcdef";
	while ((unsigned)str[i])
	{
		if ((str[i] <= 31) || str[i] >= 127)
		{
			write(1, "\\", 1);
			a = (str[i] / 16);
			b = (str[i] % 16);
			write(1, &hxa[a], 1);
			write(1, &hxa[b], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int main(void)
{
	//char *str = "This is pretty weird\n\t.";

	char v[2] = "";
	ft_putstr_non_printable(v);


	return (0);
}
*/
