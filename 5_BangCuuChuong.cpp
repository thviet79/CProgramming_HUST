#include <stdio.h>

int main()
{
    int n;
    printf("Nhap pham vi cua bang cuu chuong: ");
    scanf("%d", &n);
    printf("\tx");
    for (int i = 1; i <= n; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\t");
        printf("%d\t", i);
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}