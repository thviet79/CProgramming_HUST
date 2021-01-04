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
    int x, y, z;
    int *p, *q, *r;
    scanf("%d%d%d", &x, &y, &z);
    p = &x;
    q = &y;
    r = &z;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %d\n", p);
    printf("q = %d\n", q);
    printf("r = %d\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    printf("SWAP\n");
    swap(p, q, r);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %d\n", p);
    printf("q = %d\n", q);
    printf("r = %d\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    printf("SWAP");
    swap(&x, &y, &z);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %d\n", p);
    printf("q = %d\n", q);
    printf("r = %d\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
}
