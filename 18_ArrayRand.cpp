#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void DelElement(int *p, int n, int l)
{
    for (int i = n; i < l - 1; i++)
    {
        p[i] = p[i + 1];
    }
}

int main()
{
    srand((int)time(0));

    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", &p[i]);
    }

    int a[n];

    for (int i = n; i > 0; i--)
    {
        int x = rand() % i;
        a[i - 1] = p[x];
        DelElement(p, x, i);
    }

    free(p);

    printf("New array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\t", i + 1, a[i]);
    }
}