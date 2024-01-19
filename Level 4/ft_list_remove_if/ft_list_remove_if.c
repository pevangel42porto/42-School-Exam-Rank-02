#include <stdlib.h>
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur = *begin_list;
	
	if ((cmp)(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}	
}

#include <stdio.h>
 #include <string.h>
void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%p\n", cur->data);
		cur = cur->next;
	}
}

int	main()
{
	t_list *a = malloc(sizeof(t_list) * 1);
	t_list *b = malloc(sizeof(t_list) * 1);
	t_list *c = malloc(sizeof(t_list) * 1);

	char stra[] = "string a";
	char strb[] = "string b";
	char strc[] = "string c";

	a->data = stra;
	b->data = strb;
	c->data = strc;

	a->next = b;
	b->next = c;
	c->next = 0;

	t_list **begin_list = &a;
	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, stra, strcmp);
	print_list(begin_list);

}