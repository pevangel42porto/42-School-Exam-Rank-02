#include <stdio.h>
#include <stdlib.h>

int			*ft_range(int start, int end)
{
	int			*range;
	int			i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}
 #include <stdio.h>

int main() {
    int start = 0;
    int end = 0;

    int *result = ft_range(start, end);

    printf("Result: ");
    for (int i = 0; i <= abs(start - end); i++) {
        printf("%d ", result[i]);
    }

    free(result);  // Não se esqueça de liberar a memória alocada pela função ft_range

    return 0;
}
