#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            sum += a[i];
    }
    printf("Result: %d", sum);
}
