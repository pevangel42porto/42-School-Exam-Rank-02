#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_hidenp(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	int	flag = 0;
	int	size_check = ft_strlen(s1);

	while (s1[i] != '\0')
	{
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				flag++;
				break;
			}
			j++;;
		}
		i++;
	}
	if (size_check == flag)
		write (1, "1", 1);
	else
		write (1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	write (1, "\n", 1);
}