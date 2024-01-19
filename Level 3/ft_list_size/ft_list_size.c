typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *list;
	int	count;

	list = begin_list;
	if (list)
	{
		while(list)
		{
			list = list -> next;
			count++;
		}
	}
	return (count);
}