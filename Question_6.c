#include <stdio.h>
void modifyArray(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] *= 2;
    }
    for (int i = n / 2; i < n; i++)
    {
        *(arr + i) *= 2;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    // 717580
    modifyArray(arr, n);
    printf("Modified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}