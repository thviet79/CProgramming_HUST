#include <stdio.h>

int main()
{
double regWages, // calculated regular wages
basePay = 25000, // base pay rate
regHours = 40.0, // hours worked less overtime
otWages, // overtime wages
otPay = 40000, // overtime pay rate
otHours = 10, // overtime hours worked
totalWages; // total wages
regWages = basePay * regHours;
otWages = otPay * otHours;
totalWages = regWages + otWages;
printf("\n Wages for this week are %0.1f $", totalWages);
return 0;
}
