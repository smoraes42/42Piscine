#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if(power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while(power--)
			res *= nb;
	return (res);
}

int main(void)
{
	int y = ft_iterative_power(2,-1);
	printf("%d", y);
	return (0);
}

