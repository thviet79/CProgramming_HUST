#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char Name[100];
    int Gender;
    double Grade;
};

void StudentIn(Student *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nSTUDENT %d\n", i + 1);
        printf("Enter name:\n");
        fflush(stdin);
        fgets((p + i)->Name, 100, stdin);
        (p + i)->Name[strlen((p + i)->Name) - 1] = '\0';
        printf("Enter Gender (1 = Male, 0 = Female):\n");
        scanf("%d", &(p + i)->Gender);
        printf("Enter Grade:\n");
        scanf("%lf", &(p + i)->Grade);
    }
}

char *BestStudent(Student *p, int n)
{
    double max = p->Grade;
    char *best;
    for (int i = 0; i < n; i++)
    {
        if (max <= (p + i)->Grade)
        {
            max = (p + i)->Grade;
            best = (p + i)->Name;
        }
    }
    return best;
}

void StudentOut(Student *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nSTUDENT %d\n", i + 1);
        printf("Name: %s", (p + i)->Name);
        printf("Gender: %s\n", (p + i)->Gender == 0 ? "Female" : (p + i)->Gender == 1 ? "Male" : "Error");
        printf("Grade: %g", (p + i)->Grade);
    }
}

int main()
{
    printf("Enter the number of students:\n");
    int n;
    scanf("%d", &n);
    Student *p = (Student *)malloc(n * (sizeof(Student)));
    StudentIn(p, n);
    StudentOut(p, n);
    printf("\nStudent %s has the best performance!", BestStudent(p, n));
    free(p);
}
