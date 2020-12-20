#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand((int)time(0));

    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", a + i);
    }

    for (int i = 0; i < n; i++)
    {
        int x = rand() % (n - i) + i;
        int temp = a[i];
        a[i] = a[x];
        a[x] = temp;
    }

    printf("New array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\t", i + 1, a[i]);
    }
}