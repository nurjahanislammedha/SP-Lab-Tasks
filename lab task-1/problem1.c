/*Niloy's basic salary is input, calculate gross salary (1)*/

#include <stdio.h>

int main ()
{
    float basic_salary;
    float dearness_alllowance;
    float house_rent;
    float gross_salary;

    printf(" Enter basic salary = ");
    scanf ("%f", &basic_salary);

    dearness_alllowance=0.4*basic_salary;
    house_rent=0.2*basic_salary;
    gross_salary=basic_salary+dearness_alllowance+house_rent;

    /* .2 is taken because it will show 2 cells after decimal value*/
    printf ("Gross salary is =% .2f", gross_salary );

    return 0;
}
