#include <stdio.h>

int isPalindrome(int x)
{
    int input = x;
    int remainder;
    long long reverse = 0;

    if (input < 0)
        return 0;

    while (input > 0)
    {
        remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input /= 10;
    }
    if (reverse == x)
        return 1;
    return 0;
}

int main()
{
    printf("final output is %d", isPalindrome(-121));
    return 0;
}
