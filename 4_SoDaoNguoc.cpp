#include <stdio.h>

int main()
{
    long long n;
    printf("Nhap so muon dao nguoc: ");
    scanf("%lld", &n);

    printf("So dao nguoc la: ");

        if (n == 0)
            printf("%d", 0);
    else
    {
        while (n % 10 == 0)
        {
            n /= 10;
        }

        while (n != 0)
        {
            printf("%lld", n % 10);
            n /= 10;
        }
    }
}