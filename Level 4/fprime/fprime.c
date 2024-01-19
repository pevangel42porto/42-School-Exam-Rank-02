#include <stdio.h>
#include <stdlib.h>



void	ft_prime(int nbr)
{
	int	div = 2;

	if (nbr == 1)
		printf("1");
	if (nbr < 1)
		return;
	while (div <= nbr)
	{
		if (nbr % div == 0)
		{
			printf("%d", div);
			if (nbr == div)
				return;
			printf("*");
			nbr /= div;
			div = 1;
		}
		div++;
	}


}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_prime(atoi(argv[1]));
	}
	printf("\n");
}