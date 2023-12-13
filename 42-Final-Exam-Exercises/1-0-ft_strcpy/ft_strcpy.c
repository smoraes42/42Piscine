/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:44:52 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/13 16:52:17 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int ind;

	ind = 0;
	while (s2[ind] != '\0')
	{
		s1[ind] = s2[ind];
		ind++;
	}
	return (s1);
}
int main(void)
{
	char v1[5] = "abcd";
	char v2[3] = "ef";

	ft_strcpy(v1, v2);
	printf("%s", v1);

	return (0);
}
