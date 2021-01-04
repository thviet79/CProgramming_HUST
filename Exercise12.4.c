#include <stdio.h>

void swap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    swap(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}
