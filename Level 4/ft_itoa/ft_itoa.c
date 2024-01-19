#include <stdlib.h>
int	ft_digit_count(int nbr)
{
	int	digit_count = 1;
	while(nbr /= 10)
		digit_count++;
	return (digit_count);
}

char	*ft_itoa(int nbr)
{
	char *result;
	int	d_count;
	int	n;
	
	d_count = ft_digit_count(nbr);
	n = nbr;
	if (nbr < 0)
	{	
		n *= -1;
		d_count++; 
	}
	result = (char *)malloc(sizeof(char) * d_count + 1);
	if (!result)
		return (NULL);
	result[d_count] = 0;
	while(d_count--)
	{
		result[d_count] = n % 10 + '0';
		n /= 10;
	}
	if (nbr < 0)
	{
		*(result + 0) = '-';
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(100));
	printf("%s\n", ft_itoa(-100));
	printf("%s\n", ft_itoa(0));
}
*/