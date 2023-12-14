#include <unistd.h>


int	first_word(char **argv)
{
	int ind;
	int end;

	ind = 0;
	end = 0;
	if (argc != 2)
		write(1,"\n", 1);
	else
		while (argv[1][ind] != '\0')
		{
			if ((argv[1][ind] >= 'a' && argv[1][ind] <='z') || (argv[1][ind] >= 'A' && argv[1][ind] <= 'Z'))
			{
				if (argv[1][ind] == 32 || argv[1][ind] == '\t' && ind != 0)
					return end;
				end++;
			}	 
			ind++;
		}
	return (-1);
}
int main(int argc, char **argv)
{
	return (0);
}
