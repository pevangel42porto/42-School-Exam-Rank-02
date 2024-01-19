int	max(int* tab, unsigned int len)
{
	int	i = 0;
	int	max;

	if (!tab)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
#include <stdio.h>

int	main()
{
	int	example[] = {1, 35, 3, 4, 5, 6};

	printf("%d", max(example, 5));
}*/