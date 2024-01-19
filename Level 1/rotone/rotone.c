#include <unistd.h>

void	ft_rotone(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		write (1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
}