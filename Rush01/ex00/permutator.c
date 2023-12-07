#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	permutator(const char *src, int len, char *dest, char *destbits, int n)
{
	if (n == len)
	{
		printf("%.*s\n", len, dest);
		return 1;
	}
	else
	{
		int count = 0;
		int i = 0;
		while (i < len)
		{
			if (destbits[i] == 0)
			{
				destbits[i] = 1;
				dest[n] = src[i];
				count += permutator(src, len, dest, destbits, n+1);
				destbits[i] = 0;
			}
			i++;
		}
		return count;
	}
}

int lent(char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
 int main(int argc, char **argv)
{
	
	(void) argc;
	int len = lent(argv[1]);
	char dest[len];
	char destbits[len];

	memset(destbits, 0, sizeof destbits);
	int total = permutator(argv[1], len, dest, destbits, 0);
	printf("comb: %d\n", total);
	return (0);
}
