/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:42:29 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 20:01:27 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//
//Prototypes
void 	ft_putnbr_base(int, char *);
int		ft_atoi(const char *);
void	ft_putchar(char c);
void    printNbr(int, int, char *);
int		doubleChar(char *);

//COMMAND LINE ARGUMENTS argv[1]=n ; argv[2]=symbols
// ~gcc ft_putnbr_base.c && ./a.out 42 "01"

int		main(int argc, char **argv)
{
	(void)argc;
	int		n;
	char	*baseSymbols;

	//I use commandLine args for tests
	//Use simple strings if u dunno yet
	n = ft_atoi(argv[1]);//Ok
	baseSymbols = argv[2];//Ok

	//Exercise function
	ft_putnbr_base(n, baseSymbols);
}

void 	ft_putnbr_base(int nbr, char *base)
{
	int		baseValue;

	baseValue = 0;

	//With a nested constrain control
	while (base[baseValue])
	{
		//base contains + or - ;
		if (base[baseValue] == '+' || base[baseValue] == '-')
			return;
		//Actual base value
		++baseValue;
	}
	//base is empty or size of 1;
	if (baseValue < 2)
		return;
	//base contains the same char twice
	if (doubleChar(base)) //Ok!
		return;
	//Recursively print number
	printNbr(nbr, baseValue, base);
}

void	printNbr(int n, int baseValue, char *symbols)
{
	//long type, to trick the Overflow
	long 	nLong;

	nLong = n;
	if (nLong < 0)
	{
		//I'm sure here, no Overflow
		nLong = -nLong;
		ft_putchar('-');
	}
	//Elegance of recursion 💃
	if (nLong >= baseValue)
		printNbr(nLong / baseValue, baseValue, symbols);
	ft_putchar(symbols[nLong % baseValue]);
}

int 	doubleChar(char *symbols)
{
	int		i;
	int		j;

	i = 0;
	//Iteratively search for a double char
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return 1;
			++j;
		}
		++i;
	}
	return 0;
}

//atoi is just for the main TESTi, not the exercise itself
int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' '  ||
		   str[i] == '\t' ||
		   str[i] == '\n' ||
		   str[i] == '\v' ||
		   str[i] == '\f' ||
		   str[i] == '\r')
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
