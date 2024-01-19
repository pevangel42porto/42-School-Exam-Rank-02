#include <unistd.h>

int	ft_repeat_alpha(char c)
{
	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
			return(c = (c - 'a') + 1);
		else if (c >= 'A' && c <= 'Z')
			return (c = (c - 'A') + 1);
		else
			return (1);
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	repeat;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			repeat = ft_repeat_alpha(argv[1][i]);
			while (repeat--)
			{
				write(1, &argv[1][i], 1);
			}
			i++;

		}
	}
	write (1, "\n", 1);
}