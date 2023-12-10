#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else if (power >= 2)
		return (nb * ft_recursive_power(nb - 1, power -1));
	else
		return (0);
}

int	main(void)
{
	int y = ft_recursive_power(2, 3);
	printf("%d", y);

	return (0);
}
