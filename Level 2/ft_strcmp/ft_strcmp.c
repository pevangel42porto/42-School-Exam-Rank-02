int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/* 
#include <stdio.h>
int	main()
{
	char s1[] = "ola bem vindo";
	char s2[] = "ola bem";

	printf("%d", ft_strcmp(s1, s2));
} */