#include <unistd.h>
#include <stdio.h>


int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb-1));
	else
		return (0);
}

int main(void)
{
	int 	x;

	x = ft_recursive_factorial(7);
	printf("%d", x);
	return (0);
}

