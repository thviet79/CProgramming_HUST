#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float *p = &a;
    *p += 100;
    printf("%f ", a);
    p = &b;
    *p += 100;
    printf("%f ", b);
    p = &c;
    *p += 100;
    printf("%f", c);
}
