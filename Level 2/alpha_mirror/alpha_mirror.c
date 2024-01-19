#include <unistd.h>

void	ft_alphamirror(char *str)
{
	int	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('a' + 'z') - str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ('A' + 'Z') - str[i];
		write(1, &str[i++], 1); 
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_alphamirror(argv[1]);
	write(1, "\n", 1);
}