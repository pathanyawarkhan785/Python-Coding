#include <stdio.h>

int main()
{
    printf("start\n");

    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x < 5)
        {
            printf("Hardik\n");
            continue;
        }
        else
            break;
    }
    return 0;
}
