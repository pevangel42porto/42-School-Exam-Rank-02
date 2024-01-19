#include <stdio.h>
#include <stdlib.h>

void	ft_do_op(int n1, char signal, int n2)
{
	int result;

	if(signal == '+')
		result = n1 + n2;
	if(signal == '-')
		result = n1 - n2;
	if(signal == '*')
		result = n1 * n2;
	if(signal == '/')
		result = n1 / n2;
	if(signal == '%')
		result = n1 % n2;
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	printf("\n");
}