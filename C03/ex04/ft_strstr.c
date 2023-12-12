/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:57:12 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/12 02:29:14 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char	*ft_strstr(char *str, const char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j +1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

//char	*ft_strstr(char *str, char *to_find)
//{
//	while (*str)
//	{
//		const char* a = str, *b = to_find;
//		while (*a == *b)
//		{
//			if (!*++b)
//			{
//				return (char*)str;
//			}
//			++a;
//		}
//		++str;
//	}
//	return (0);
//}
/*
int main(void)
{
	char s1[13] = "andandadoso";
	char s2[3] = "dad";

	char *str = ft_strstr(s1, s2);
	printf("ft_Sub:\t\t %s\n", str);
	char *str2 = strstr(s1, s2);
	printf("strg.h_Sub:\t\t %s\n", str2);

	return (0);
}
*/
