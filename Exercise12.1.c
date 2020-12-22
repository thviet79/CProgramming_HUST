#include <stdio.h>

double KinEn(double m, double v)
{
    return m * v * v / 2;
}

int main()
{
    double m, v;
    printf("Enter mass: ");
    scanf("%lf", &m);
    printf("Enter speed: ");
    scanf("%lf", &v);
    printf("Kinetic Energy: %lf\n", KinEn(m, v));
}
