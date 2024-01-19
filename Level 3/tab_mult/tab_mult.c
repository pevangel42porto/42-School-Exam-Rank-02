#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nbr;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = (nbr * 10) + (str[i] - '0');
		}
		i++;
	}
	return (nbr);
}

char	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = (nbr % 10) + '0';
	ft_putchar(digit);

}

void	ft_tab_mult(int	nbr)
{
	int	i = 1;
	int	result = 0;
	while(i < 10)
	{
		ft_putchar(i + '0');
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		result = i * nbr;
		ft_putnbr(result);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_tab_mult(ft_atoi(argv[1]));
	else
		ft_putchar('\n');
}