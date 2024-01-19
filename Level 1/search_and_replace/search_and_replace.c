#include <unistd.h>
void	ft_search_and_replace(char *str, char *x, char *y)
{
	int	i = 0;
	while(str[i])
	{
		if (str[i] == x[0])
			str[i] = y[0];
		write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		ft_search_and_replace(argv[1],argv[2],argv[3]);
	}
	write(1, "\n", 1);
}
