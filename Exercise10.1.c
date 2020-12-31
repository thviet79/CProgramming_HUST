#include <stdio.h>

int main()
{
    int a[100];
    printf("Enter array:\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0], sum = 0;
    for (int i = 0; i < 100; i++)
    {
        if (min > a[i])
            min = a[i];
        if (a[i] % 2)
            sum += a[i];
    }
    printf("Minimum value: %d\nSum of the odd number: %d\n", min, sum);
}
