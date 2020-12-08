#include <stdio.h>

int main()
{
    printf("Enter grades (enter 0 to stop):\n");
    double sum = 0, count = 0, grade = 1;

    while (grade != 0)
    {
        scanf("%lf", &grade);
        sum += grade;
        if (grade)
            count++;
    }

    printf("Average = %g\n", sum / count);
}
