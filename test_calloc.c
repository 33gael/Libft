#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    size_t nmemb = 10;
    size_t size = 4;
    unsigned char *p1 = ft_calloc(nmemb, size);
    unsigned char *p2 = calloc(nmemb, size);
    size_t i;

    if (!p1)
        printf("ft_calloc returned NULL\n");
    else
    {
        printf("ft_calloc ptr=%p\n", (void *)p1);
        for (i = 0; i < nmemb * size; ++i)
            if (p1[i] != 0)
            {
                printf("ft_calloc not zero at %zu\n", i);
                break;
            }
        if (i == nmemb * size)
            printf("ft_calloc memory zeroed\n");
    }

    if (!p2)
        printf("libc calloc returned NULL\n");
    else
    {
        printf("calloc ptr=%p\n", (void *)p2);
        for (i = 0; i < nmemb * size; ++i)
            if (p2[i] != 0)
            {
                printf("calloc not zero at %zu\n", i);
                break;
            }
        if (i == nmemb * size)
            printf("calloc memory zeroed\n");
    }

    free(p1);
    free(p2);
    return (0);
}
