#include <stdio.h>

int main()
{
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    for (int i = 0; i < 5; i++)
    {
        printf("%0x\n", &a[i]);
    }
}
