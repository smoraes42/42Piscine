/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:54:34 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/09 19:46:41 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	magic(int nb, int baseValue, char *baseSymbols)
{
	if (nb > baseValue)
		magic(nb / baseValue, beValue, baseSymbols);

	char	mysymbol;

	mySymbol = baseSymbols[nb % baseValue];
	while (*baseSymbols != mySymbol)
		baseSymboll++;
	write(1, 

}



int main(void)
{
	char bSym[] = "0123456789abcdefg";
	int bVal;
	int n;

	n = 42;
	bVal = 16;
	while(n)
	{
		printf("\n\n%d mod %d =\t %c -> %d\n", n, bVal, bSym[n % bVal], n%bVal);
		printf("%d div %d = %d\n", n, bVal, (n/bVal));

		n/= bVal;
	}
	return (0);
}
