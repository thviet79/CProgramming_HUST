#include <stdio.h>

double Celsius(double f)
{
    return 5 * (f - 32) / 9;
}

int main()
{
    printf("Fahrenheit\t\tCelsius\n");
    for (double i = 0; i <= 20; i++)
    {
        printf("%lf\t\t%lf\n", i, Celsius(i));
    }
}
