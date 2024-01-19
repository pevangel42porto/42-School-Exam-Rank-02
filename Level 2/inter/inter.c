#include <unistd.h>

int	ft_search(char *s2, char c)
{
	int	j = 0;
	while(s2[j] != '\0')
	{
		if (s2[j] == c)
			return(1);
		j++;
	}
	return(0);
}
int	is_firts(char *s1, char c, int pos)
{
	int	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			break;
		i++;
	}
	if (i == pos)
		return (1);
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[i]) 
	{
		if (is_firts(s1, s1[i], i) && ft_search(s2, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
}