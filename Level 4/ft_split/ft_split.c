#include <stdlib.h>

int	is_white_space(char c)
{
	return(c == ' ' || c == '\t');
}

int	count_word(char *str)
{
	int words =0;

	while(*str)
	{
		while(*str && is_white_space(*str))
			str++;
		if(*str)
			words++;
		while(*str && !(is_white_space(*str)))
			str++;
	}
	return(words);
}

void	ft_allocate(char **new, char *str, int size)
{
	int word_length = 0;
	int i = 0;
	int j = 0;
	
	while(*str && i < size)
	{
		while(*str && is_white_space(*str))
			str++;
		word_length = 0;
		while(*str && !(is_white_space(*str)))
		{
			word_length++;
			str++;
		}
		str -= word_length;
		new[i] = (char *)malloc(sizeof(char *) * word_length + 1);
		if (!new)
		{
			while(j < i)
			{
				free(new[j]);
				j++;
			}
			free(new);
		}
		j = 0;
		while(*str && !(is_white_space(*str)))
		{
			new[i][j] = *str;
			str++;
			j++;
		}
		new[i][j] = '\0';
		i++;
	}
	new[i] = NULL;
}

char **ft_split(char *str)
{
	char **new;
	int size = count_word(str);
	new = (char **)malloc(sizeof(char *) * size + 1);
	if (!new)
		return(NULL);

	ft_allocate(new, str, size);
	return(new);
}

#include <stdio.h>

int main()
{
	char str[] = "Ola bem vindo ao mundo 42";
	char **arry = ft_split(str);
	int i = 0;
	

	if(arry[i] != NULL)
	{
		while(arry[i] != NULL)
		{
			printf("palavra%d: %s ", i + 1, arry[i]);
			i++;
		}
		i = 0;
		while(arry[i] != NULL)
		{
			free(arry[i]);
			i++;
		}
		free(arry);
	}
	else
		return(0);

}