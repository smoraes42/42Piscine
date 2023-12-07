#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int *p = (int*) malloc(3 * sizeof(int));
	
	(void) argc;
	(void) argv;
	p[1] = 3;
	p[2] = 90;

	printf("The value is %d and %d", p[1], p[2]);

	return (0);
}

char **cleanArray = malloc((max * 4) *sizeof(char));
