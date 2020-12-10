#include <stdio.h>

int main()
{
  double length;
  printf("Enter length in kms: ");
  scanf("%lf", &length);
  printf("Length in miles: %lf", length * 0.621371);
}
