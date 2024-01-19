#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *rrange;
    int size, i;

    // Calculate the size of the array
    size = (start > end) ? (start - end) + 1 : (end - start) + 1;

    // Allocate memory for the array
    rrange = (int *)malloc(sizeof(int) * size);

    if (rrange == NULL) // Check if malloc was successful
        return NULL;

    // Fill the array with consecutive values from end to start
    for (i = 0; i < size; ++i)
    {
        rrange[i] = end;
        end += (start > end) ? 1 : -1;
    }

    return rrange;
}

