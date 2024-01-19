int	ft_iswhitespace(char c)
{
	int i = 0;
	if (c == ' ' || c == '\t')
		return(1);
	return(0);
}

int	ft_isnbr(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	ft_atoi(const char *str)
{
	int result = 0;
	int signal = 1;

	while(ft_iswhitespace(*str))
		str++;

	signal = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : 0;
	while(ft_isnbr(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return(result * signal);
}
/* 
#include <stdio.h>

int	main()
{
	char example [] = "-13268!";
	
	printf("%d", ft_atoi(example));
}  */