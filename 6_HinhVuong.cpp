#include <stdio.h>

int main()
{
    int n;

    printf("Nhap do dai canh hinh vuong\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*  ");
            }
            printf("\n");
        }
        else
        {
            for (int k = 0; k < n; k++)
            {
                if (k == 0)
                {
                    printf("*");
                }
                else if (k < n - 1)
                {
                    printf("   ");
                }
                else
                {
                    printf("  *\n");
                }
            }
        }
    }
}