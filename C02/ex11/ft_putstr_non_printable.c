/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 01:55:33 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/04 14:46:24 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		a;
	int		b;
	char	*hxa;

	hxa = "0123456789abcdef";
	while (*str)
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			write(1, "\\", 1);
			a = (*str / 16);
			b = (*str % 16);
			write(1, &hxa[a], 1);
			write(1, &hxa[b], 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
/*
int main(void)
{
	char *str = "This is pretty weird\n\t.";

	ft_putstr_non_print(str);


	return (0);
}
*/
