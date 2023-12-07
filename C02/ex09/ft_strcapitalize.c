/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:47:23 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/03 22:06:28 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		}
		else
		{
			if ((str[i + 1] >= 'A') && (str[i + 1] <= 'Z'))
				str[i + 1] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	//	char	a[100] = "salut, comment tu vas ? 42mots cinquenta+deu";
	//	char	b[10] = "Hello";
	ft_strcapitalize(argv[1]);
	printf("%s", argv[1]);
	return (0);
}
*/
