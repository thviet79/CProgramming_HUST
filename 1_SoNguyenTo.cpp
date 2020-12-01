#include <stdio.h>

int main()
{
    int n;
    printf("Nhap gioi han: ");
    scanf("%d", &n);

    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                dem++;
            }
        }

        if (dem == 1)
        {
            printf("%d ", i);
        }
        dem = 0;
    }
}