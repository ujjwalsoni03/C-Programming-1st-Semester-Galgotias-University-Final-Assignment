#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 6)
    {
        printf("Error: Not enough inputs.\n");
        return 1; // Exit with error code
    }
    int x[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &x[i]);
    }
    int result = (((x[0] + x[1]) - x[2]) * x[3] / x[4]) % x[5];
    printf("%d\n", result);

    return 0;
}