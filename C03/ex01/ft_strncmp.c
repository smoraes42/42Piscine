/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:28:43 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/06 20:04:25 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int main (void)
{

	char s1[10] = "abcdefghi";
	char s2[10] = "jklmnopqr";

	printf("%s\n", s1);
	printf("%s\n", s2);

	int x = ft_strncmp(s1, s2, 3);
	printf("%d\n", x);

	printf("%s\n", s1);
	printf("%s\n", s2);

	
	return (0);
}
*/
