#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so can phan tich: ");
    scanf("%d", &n);
    printf("%d = ", n);

    for (int i = 2; i <= n; i++)
    {
        int somu = 0;
        while (n % i == 0)
        {
            n /= i;
            somu++;
        }
        if (somu)
        {
            printf("(%d ^ %d) ", i, somu);
            if (n == 1)
            {
                continue;
            }
            printf("* ");
        }
    }
}