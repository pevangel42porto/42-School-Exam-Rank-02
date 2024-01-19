#include <unistd.h>

void	ft_rostring(const char *s, int first)
{
	int	i = 0;
	int	first_word = 0;

	
	while (s[i])
	{
		while(s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t')
		{
			if (first_word == 0)
			{
				while(s[i] && s[i] != ' ' && s[i] != '\t')
				{
					first_word++;
					i++;
				}
			}	
			else
			{
				while (s[i] && s[i] != ' ' && s[i] != '\t')
					 write(1, &s[i++], 1);
			
			write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	while (first_word--)
		write(1, &s[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1 && argv[1])
		ft_rostring(argv[1], 1);
	write(1, "\n", 1);
}