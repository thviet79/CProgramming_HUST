#include <stdio.h>

void decsort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void odddecsort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] % 2)
            {
                if (a[i] < a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

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
    odddecsort(a, n);
    printf("Array - odd numbers sorted:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    decsort(a, n);
    printf("\nArray - int numbers sorted:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
