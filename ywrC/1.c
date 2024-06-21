#include <stdio.h>

int main()
{
    printf("start\n");

    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x < 5)
            continue;
        else
        {
            printf("Hardik\n");
            break;
        }
    }
    printf("Hardik\n");
    return 0;
}