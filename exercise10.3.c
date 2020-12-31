#include <stdio.h>

int cmparr(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i])
            return 0;
    }
    return 1;
}

int main()
{
    printf("Enter the size of the first array:\n");
    int n;
    scanf("%d", &n);
    printf("Enter the size of the second array:\n");
    int p;
    scanf("%d", &p);
    if (p - n)
        printf("The two arrays are not equal!\n");
    else
    {
        int a[n], b[n];
        printf("Enter array 1:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter array 2:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        if (cmparr(a, b, n))
            printf("The two arrays are equal!\n");
        else
            printf("The two arrays are not equal!\n");
    }
}
