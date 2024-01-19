#include <unistd.h>

void	ft_epur_str(char *str)
{
	int	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t'))
		{
			while((str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i] == '\0')
				break;
			write(1, " ", 1); 
		}
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_epur_str(argv[1]);
	write(1, "\n", 1);
}