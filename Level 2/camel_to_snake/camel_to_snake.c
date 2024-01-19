#include <unistd.h>

void	ft_camel_to_snake(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] += 32;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
}