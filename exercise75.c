#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        int dem = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                dem++;
        }
        if (dem == 1)
            printf("%d ", i);
    }
    printf("\n");
}
