void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;

	while(i < size - 1)
	{
		if(tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else 
			i++;
	}
}

#include <stdio.h>
int main()
{
	int tab[] = {1, 7, 4,  2, 9};
	unsigned int size = 5;
	int i = 0;

	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	printf("\n");
	sort_int_tab(tab, size);
	i = 0;
	while(i < size )
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}