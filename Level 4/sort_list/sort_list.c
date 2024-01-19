typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

void	ft_swapp(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *cur = lst;
	int swap = 1;

	while(swap == 1)
	{
		swap = 0;
		while(cur->next != 0)
		{
			if ((cmp)(cur->data, cur->next->data) == 0)
			{
				ft_swapp(&cur->data, &cur->next->data);
				swap = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return(lst);
}
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);

}

int main()
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	a->data = 300;
	b->data = 200;
	c->data = 150;

	a->next = b;
	b->next = c;
	c->next = 0;

	printf("listas antes de organizar:\n");

	t_list *cur = a;

	while(cur)
	{
		printf("%d", cur->data);
		cur = cur->next;
		printf(" ");
	}
	printf("\n");

	printf("listas depois de organizar:\n");

 	cur = sort_list(a, ascending);

	while(cur)
	{
		printf("%d", cur->data);
		cur = cur->next;
		printf(" ");
	}

}