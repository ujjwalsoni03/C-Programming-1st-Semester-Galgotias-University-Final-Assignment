#include <stdio.h>

int main()
{
    int num;
    unsigned long long factorial = 1;
    scanf("%d", &num);
    if (num < 0)
    {
        goto error;
    }
    int i = 1;
loop:
    if (i <= num)
    {
        factorial *= i;
        i++;
        goto loop;
    }
    printf("Factorial of %d is %llu\n", num, factorial);
    return 0;
error:
    printf("Error: Factorial is not defined for negative numbers.\n");

    return 1;
}