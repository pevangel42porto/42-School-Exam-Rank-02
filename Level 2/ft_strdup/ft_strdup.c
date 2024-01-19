/* #include <unistd.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int	i = 0;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	while(src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* 
int	main(int argc, char **argv)
{
	char *duplicate;  
	if (argc == 2)
	{
		duplicate = ft_strdup(argv[1]);
		write (1, duplicate, ft_strlen(argv[1]));
	}
	write (1, "\n", 1);
} */