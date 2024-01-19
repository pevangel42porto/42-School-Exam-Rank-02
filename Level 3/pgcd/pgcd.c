#include <stdio.h>
#include <stdlib.h>

int	pgcd(int n1, int n2)
{
	int	div = 1;
	int	result;
	if (n1 <= 0 || n2 <= 0)
		return(0);
	while (div <= n1 || div <= n2)
	{
		if (n1 % div == 0 && n2 % div == 0)
			result = div;
		div++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int result;
	if (argc == 3)
	{
		result = pgcd(atoi(argv[1]), atoi(argv[2]));
		printf("%d", result);
	}
	printf("\n");
}