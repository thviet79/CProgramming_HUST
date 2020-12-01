#include <stdio.h>

int kiemtra(int a)
{
    int tong = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            tong += i;
        }
    }

    if (tong == a)
        return 1;
    return 0;
}

int main()
{
    printf("Enter your number: ");
    int n;
    scanf("%d", &n);

    printf("The perfect numbers that are smaller than %d: ", n);

    for (int i = 1; i < n; i++)
    {
        if (kiemtra(i) == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}
