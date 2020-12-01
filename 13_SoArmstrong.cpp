#include <stdio.h>
#include <math.h>

int Sochuso(int n)
{
    int dem = 0;
    while (n)
    {
        n /= 10;
        dem++;
    }
    return dem;
}

int Kiemtra(int n)
{
    int soluu = n;
    int so = Sochuso(n);
    int tong = 0;

    for (int i = 1; i <= so; i++)
    {
        tong += (int)pow(n % 10, so);
        n /= 10;
    }

    if (tong == soluu)
        return 1;
    return 0;
}

int main()
{
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    if (Kiemtra(n) == 1)
        printf("%d la so Armstrong!", n);

    else
    {
        printf("%d khong phai so Armstrong! Cac so Armstrong nho hon %d la: ", n, n);

        for (int i = 1; i < n; i++)
        {
            if (Kiemtra(i) == 1)
                printf("%d ", i);
        }
    }
}