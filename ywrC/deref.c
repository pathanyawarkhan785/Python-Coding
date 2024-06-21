#include <stdio.h>
int main()
{
    int val = 27;
    int *ptr = &val;
    int **ptr2 = &ptr;

    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", **ptr2);
    return 0;
}