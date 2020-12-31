#include <stdio.h>

void rvs(float a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        float temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    rvs(a, n);
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%g ", a[i]);
    }
}
